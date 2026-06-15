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
    num_stim   = 10000000;

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
    // 宣告需要的變數
    logic [63:0] target_secret;
    logic [63:0] guessed_secret;
    logic        bit_i;
    int          latency;
    int          vote_ones;
    int          total_success_cnt = 0;

    // 參數設定
    int NUM_SECRETS = 200;
    int TRIALS_PER_BIT = 10;

    $display("========================================");
    $display("   STARTING MAJORITY VOTING ATTACK      ");
    $display("========================================");

    // [第一層迴圈] 測試 10 個隨機數字
    for (int s = 0; s < NUM_SECRETS; s++) begin
        
        // 隨機產生 64-bit Secret (改用 $urandom 拼接比較安全)
        target_secret = {$urandom(), $urandom()};
        guessed_secret = 64'b0; // 每一回合開始前，將猜測結果清零

        $display("[Secret %0d] Target: %h", s, target_secret);

        // [第二層迴圈] 逐一破解 64 個 Bit
        for (int i = 0; i < 64; i++) begin
            // vote_ones = 0; // 記錄這個 bit 判定為 1 的次數

            // 提取目標數字的第 i 個 bit (結果只會是 0 或 1)
            bit_i = (target_secret >> i) & 1'b1;

            // [第三層迴圈] 每個 Bit 連續攻擊次
            for (int t = 0; t < TRIALS_PER_BIT; t++) begin

                int random_delay = $urandom_range(15, 0);
                // int random_delay = $urandom_range(100, 50);
                `APPL_WAIT_CYC(clk_i, random_delay)
                
                // 1. 派發測資給硬體
                op_a_i   = 64'b0; 
                op_b_i   = {63'b0, bit_i};    

                op_a = op_a_i;
                op_b = op_b_i;

                in_vld_i = 1'b1;           // 啟動硬體！
                
                `APPL_WAIT_CYC(clk_i, 1)
                in_vld_i = 1'b0;           // 拉低 valid 訊號

                // 2. 計算 Latency
                latency = 0;
                while (!out_vld_o) begin
                    `APPL_WAIT_CYC(clk_i, 1)
                    latency++;
                end
                `APPL_WAIT_CYC(clk_i, 1) // 讓背景的 Monitor 印完，避免畫面錯亂
                latency++;

                // 3. cycle == 2 代表 bit 為 1
                if (latency < 66) begin
                    // vote_ones++;
                    guessed_secret[i] = 1'b1;
                    break;
                end
            end // 結束 100 次測試

            // // 4. 多數決 (Majority Vote)：超過 50 次判定為 1，就當它是 1
            // if (vote_ones > (TRIALS_PER_BIT / 2)) begin
            //     guessed_secret[i] = 1'b1;
            // end else begin
            //     guessed_secret[i] = 1'b0;
            // end
        end // 結束 64 個 bit 的掃描

        // [結算] 拿攻擊者猜的數字跟正確答案比較
        if (guessed_secret === target_secret) begin
            $display("  -> Result: SUCCESS! Guessed exactly: %h", guessed_secret);
            total_success_cnt++;
        end else begin
            $display("  -> Result: FAILED!  Guessed: %h", guessed_secret);
        end
        $display("----------------------------------------");

    end // 結束 10 個 Secret 測試

    $display("Total Exact Matches: %0d / %0d", total_success_cnt, NUM_SECRETS);
    $finish; // 手動結束模擬
end