// Copyright 2018 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
//
// Author: Michael Schaffner (schaffner@iis.ee.ethz.ch), ETH Zurich
//         Andreas Traber    (traber@iis.ee.ethz.ch), ETH Zurich
//
// Date: 18.10.2018
// Description: testbench for serial 64bit divider

///////////////////////////////////////////////
// unsigned division test

    // init
    num_stim   = 100000;

    test_name  = "udiv test";

    acq_trig     <= 1;
    `APPL_WAIT_CYC(clk_i, 2)
    acq_trig     <= 0;
    `APPL_WAIT_CYC(clk_i, 2)


    ////////////////////
    // a couple of random stimuli

    for (k = 0; k < 10; k++) begin

        // void'(randomize(op_a_i));
        // void'(randomize(op_b_i));
        // 產生 64-bit random（$urandom 只有 32-bit）
        // op_a_i = { $urandom(), $urandom() };
        op_a_i = $urandom_range(1, 0);
        op_b_i = 1'b1;
        op_a = op_a_i;
        op_b = op_b_i;

        in_vld_i    = 1;
        `APPL_WAIT_CYC(clk_i, 1)
        in_vld_i    = 0;
        `APPL_WAIT_SIG(clk_i, in_rdy_o)

    end

    `APPL_WAIT_CYC(clk_i, 400)

    ///////////////////////////////////////////////

    ///////////////////////////////////////////////
    // Timing Attack Simulation: Binary Search for Bit Length
    ///////////////////////////////////////////////
begin : attack_scope
    logic [63:0] secret_op_a;
    logic [63:0] probe_op_b;
    int          low, high, mid;
    int          found_msb;
    int          cycle_cnt;

    // 參數設定
    int          num_secrets = 100;       // 總共測試 10 組不同的隨機數
    int          trials_per_secret = 2500; // 每組隨機數攻擊 10 次

    int          success_cnt = 0;
    int          fail_cnt    = 0;
    int          actual_msb;
    logic        any_success;            // 記錄 10 次內是否有成功過

    $display("========================================");
    $display("[Attack Phase] Start %0d random secrets, %0d trials each", num_secrets, trials_per_secret);
    $display("========================================");

    // 外層迴圈：產生不同的受害者 (secret)
    for(int i = 0; i < num_secrets; ++i) begin
        
        // 1. 產生新的秘密數值
        secret_op_a = { $urandom(), $urandom() }; 
        
        // 2. 算出這個隨機數「真實的 MSB」作為標準答案
        actual_msb = 0;
        for (int b = 63; b >= 0; b--) begin
            if (secret_op_a[b] == 1'b1) begin
                actual_msb = b;
                break; 
            end
        end

        any_success = 0; // 每換一個新的 secret，成功旗標歸零
        $display("[Secret %0d] Target secret_op_a = %16h (Actual MSB: %0d)", i, secret_op_a, actual_msb);

        // 針對同一個 secret，連續攻擊
        for(int trial = 0; trial < trials_per_secret; ++trial) begin
            
            low  = 0;
            high = 63;
            found_msb = 0;

            // 二分搜開始
            while (low <= high) begin
                mid = (low + high) / 2;
                probe_op_b = 64'b1 << mid;
                
                op_a_i = secret_op_a;
                op_b_i = probe_op_b;
                op_a = op_a_i;
                op_b = op_b_i;

                num_stim++; // 維持 TB 存活

                `APPL_WAIT_SIG(clk_i, in_rdy_o)
                
                in_vld_i = 1;
                `APPL_WAIT_CYC(clk_i, 1)
                in_vld_i = 0;
                
                cycle_cnt = 1;
                out_rdy_i = 1; 
                
                while (!out_vld_o) begin
                    `APPL_WAIT_CYC(clk_i, 1)
                    cycle_cnt++;
                end

                `APPL_WAIT_CYC(clk_i, 1)

                if (cycle_cnt == 1) begin 
                    high = mid - 1;
                end 
                else begin
                    found_msb = mid; 
                    low = mid + 1;
                end
            end // 結束單次二分搜

            // 3. 檢查這 1 次 trial 是否命中答案
            if (found_msb == actual_msb) begin
                any_success = 1;
                break;
                // (可選) 如果只要成功一次就算數，真實攻擊中這裡其實可以直接加上 break 提早結束剩下的 trial 以省時間
                // 但為了完整跑完 10 次測試，我們這裡不加 break。
            end

        end // 結束 10 次攻擊

        // 4. 結算這一個 secret 的最終結果
        if (any_success) begin
            $display("  -> Result: SUCCESS! (At least 1 hit in %0d trials)", trials_per_secret);
            success_cnt++;
        end else begin
            $display("  -> Result: FAILED! (0 hits in %0d trials)", trials_per_secret);
            fail_cnt++;
        end
        $display("----------------------------------------");

    end // 結束所有 secrets 測試
    
    // 5. 印出總結報告
    $display("");
    $display("========================================");
    $display("           ATTACK STATISTICS            ");
    $display("========================================");
    $display(" Total Secrets : %0d", num_secrets);
    $display(" Successes     : %0d", success_cnt);
    $display(" Failures      : %0d", fail_cnt);
    $display(" Success Rate  : %0d%%", (success_cnt * 100) / num_secrets);
    $display("========================================");
    
    $finish; // 手動結束模擬
end