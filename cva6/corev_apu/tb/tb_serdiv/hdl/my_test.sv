// my_test.sv
// ---------------------------------------------------------
// 自定義測資與週期紀錄
// ---------------------------------------------------------

// init
num_stim = 3;

test_name = "My Test";

acq_trig     <= 1;
`APPL_WAIT_CYC(clk_i, 2)
acq_trig     <= 0;
`APPL_WAIT_CYC(clk_i, 2)

// test1
`APPL_WAIT_SIG(clk_i, in_rdy_o) // 等待 DUT 準備好

opcode_i = 0;                   // udiv

op_a = 1'b0;
op_b = 1'b0;                 

op_a_i = op_a; 
op_b_i = op_b;                   


in_vld_i = 1;                  // 發送有效信號
`APPL_WAIT_CYC(clk_i, 1)
in_vld_i    = 0;

// test2
`APPL_WAIT_SIG(clk_i, in_rdy_o)

op_a = 64'b1111111111111111111111111011111111111111111111111111111111111111;
op_b = 1'b1;

op_a_i = op_a;
op_b_i = op_b;

in_vld_i    = 1;
`APPL_WAIT_CYC(clk_i, 1)
in_vld_i    = 0;

// test3
`APPL_WAIT_SIG(clk_i, in_rdy_o)

op_a = 3'b100;
op_b = 1'b1;

op_a_i = op_a;
op_b_i = op_b;

in_vld_i    = 1;
`APPL_WAIT_CYC(clk_i, 1)
in_vld_i    = 0;


`APPL_WAIT_SIG(clk_i, in_rdy_o)