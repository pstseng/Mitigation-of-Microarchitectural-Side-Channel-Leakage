// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb___024root____VbeforeTrig_h2004b266__0(Vtb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb__DOT__p_stim__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb__DOT__p_stim__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb__DOT__p_stim__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb__DOT__p_stim__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb__DOT__p_stim__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb__DOT__p_stim__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_7__DOT____Vrepeat6;
    tb__DOT__p_stim__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__s;
    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__s = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_8__DOT____Vrepeat7;
    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_9__DOT____Vrepeat8;
    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_10__DOT____Vrepeat9;
    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_11__DOT____Vrepeat10;
    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_11__DOT____Vrepeat10 = 0;
    IData/*31:0*/ tb__DOT__p_stim__DOT__unnamedblk1_12__DOT____Vrepeat11;
    tb__DOT__p_stim__DOT__unnamedblk1_12__DOT____Vrepeat11 = 0;
    // Body
    vlSelfRef.tb__DOT__stim_start = 0U;
    vlSelfRef.tb__DOT__stim_end = 0U;
    vlSelfRef.tb__DOT__num_stim = 0ULL;
    vlSelfRef.tb__DOT__test_name = ""s;
    vlSelfRef.tb__DOT__acq_trig = 0U;
    vlSelfRef.tb__DOT__rst_ni = 0U;
    vlSelfRef.tb__DOT__op_a[0U] = 0U;
    vlSelfRef.tb__DOT__op_a[1U] = 0U;
    vlSelfRef.tb__DOT__op_a[2U] = 0U;
    vlSelfRef.tb__DOT__op_b[0U] = 0U;
    vlSelfRef.tb__DOT__op_b[1U] = 0U;
    vlSelfRef.tb__DOT__op_b[2U] = 0U;
    vlSelfRef.tb__DOT__op_a_i = 0ULL;
    vlSelfRef.tb__DOT__op_b_i = 0ULL;
    vlSelfRef.tb__DOT__opcode_i = 0U;
    vlSelfRef.tb__DOT__in_vld_i = 0U;
    vlSelfRef.tb__DOT__flush_i = 0U;
    tb__DOT__p_stim__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000064U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/tb.sv", 
                                                             162);
        tb__DOT__p_stim__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb__DOT__p_stim__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "hdl/tb.sv", 
                                         162);
    vlSelfRef.__VdlySet__tb__DOT__rst_ni__v0 = 1U;
    tb__DOT__p_stim__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000064U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/tb.sv", 
                                                             166);
        tb__DOT__p_stim__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb__DOT__p_stim__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "hdl/tb.sv", 
                                         166);
    VL_WRITEF_NX("TB> stimuli application started\n",0);
    vlSelfRef.__VdlySet__tb__DOT__stim_start__v0 = 1U;
    tb__DOT__p_stim__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000064U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/tb.sv", 
                                                             170);
        tb__DOT__p_stim__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb__DOT__p_stim__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "hdl/tb.sv", 
                                         170);
    vlSelfRef.tb__DOT__num_stim = 0x0000000000989680ULL;
    vlSelfRef.tb__DOT__test_name = "udiv test"s;
    vlSelfRef.__VdlySet__tb__DOT__acq_trig__v0 = 1U;
    tb__DOT__p_stim__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/attack2_test.sv", 
                                                             26);
        tb__DOT__p_stim__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb__DOT__p_stim__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "hdl/attack2_test.sv", 
                                         26);
    vlSelfRef.__VdlySet__tb__DOT__acq_trig__v1 = 1U;
    tb__DOT__p_stim__DOT__unnamedblk1_5__DOT____Vrepeat4 = 2U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/attack2_test.sv", 
                                                             28);
        tb__DOT__p_stim__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb__DOT__p_stim__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "hdl/attack2_test.sv", 
                                         28);
    vlSelfRef.tb__DOT__p_stim__DOT__k = 0ULL;
    while (VL_GTS_IQQ(64, 0x000000000000000aULL, vlSelfRef.tb__DOT__p_stim__DOT__k)) {
        vlSelfRef.tb__DOT____VlemExpr_0 = VL_URANDOM_RANGE_I(1U, 0U);
        vlSelfRef.tb__DOT__op_a_i = (QData)((IData)(vlSelfRef.tb__DOT____VlemExpr_0));
        vlSelfRef.tb__DOT__op_b_i = 1ULL;
        vlSelfRef.tb__DOT__op_a[0U] = (IData)(vlSelfRef.tb__DOT__op_a_i);
        vlSelfRef.tb__DOT__op_a[1U] = (IData)((vlSelfRef.tb__DOT__op_a_i 
                                               >> 0x00000020U));
        vlSelfRef.tb__DOT__op_a[2U] = 0U;
        vlSelfRef.tb__DOT__op_b[0U] = (IData)(vlSelfRef.tb__DOT__op_b_i);
        vlSelfRef.tb__DOT__op_b[1U] = (IData)((vlSelfRef.tb__DOT__op_b_i 
                                               >> 0x00000020U));
        vlSelfRef.tb__DOT__op_b[2U] = 0U;
        vlSelfRef.tb__DOT__in_vld_i = 1U;
        tb__DOT__p_stim__DOT__unnamedblk1_6__DOT____Vrepeat5 = 1U;
        while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
            Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                      "@(posedge tb.clk_i)");
            co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk_i)", 
                                                                 "hdl/attack2_test.sv", 
                                                                 46);
            tb__DOT__p_stim__DOT__unnamedblk1_6__DOT____Vrepeat5 
                = (tb__DOT__p_stim__DOT__unnamedblk1_6__DOT____Vrepeat5 
                   - (IData)(1U));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                             nullptr, 
                                             "hdl/attack2_test.sv", 
                                             46);
        vlSelfRef.tb__DOT__in_vld_i = 0U;
        do {
            Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                      "@(posedge tb.clk_i)");
            co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk_i)", 
                                                                 "hdl/attack2_test.sv", 
                                                                 48);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                                 nullptr, 
                                                 "hdl/attack2_test.sv", 
                                                 48);
        } while ((1U & (~ (IData)(vlSelfRef.tb__DOT__in_rdy_o))));
        vlSelfRef.tb__DOT__p_stim__DOT__k = (1ULL + vlSelfRef.tb__DOT__p_stim__DOT__k);
    }
    tb__DOT__p_stim__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x00000190U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/attack2_test.sv", 
                                                             52);
        tb__DOT__p_stim__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (tb__DOT__p_stim__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "hdl/attack2_test.sv", 
                                         52);
    VL_WRITEF_NX("========================================\n   STARTING MAJORITY VOTING ATTACK      \n========================================\n",0);
    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__s = 0U;
    while (VL_LTS_III(32, tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__s, vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__NUM_SECRETS)) {
        vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__target_secret 
            = VL_RANDOM_Q();
        vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret = 0ULL;
        VL_WRITEF_NX("[Secret %0d] Target: %h\n",2, '~',32,tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__s
                     , '#',64,vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__target_secret);
        vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__bit_i 
                = (1U & (IData)(VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__target_secret, vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)));
            vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t = 0U;
            {
                while (VL_LTS_III(32, vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t, vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__TRIALS_PER_BIT)) {
                    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_8__DOT____Vrepeat7 
                        = vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__random_delay;
                    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
                        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                                  "@(posedge tb.clk_i)");
                        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb.clk_i)", 
                                                                             "hdl/attack2_test.sv", 
                                                                             98);
                        tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_8__DOT____Vrepeat7 
                            = (tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_8__DOT____Vrepeat7 
                               - (IData)(1U));
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                                         nullptr, 
                                                         "hdl/attack2_test.sv", 
                                                         98);
                    vlSelfRef.tb__DOT__op_a_i = 0ULL;
                    vlSelfRef.tb__DOT__op_b_i = (QData)((IData)(vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__bit_i));
                    vlSelfRef.tb__DOT__op_a[0U] = (IData)(vlSelfRef.tb__DOT__op_a_i);
                    vlSelfRef.tb__DOT__op_a[1U] = (IData)(
                                                          (vlSelfRef.tb__DOT__op_a_i 
                                                           >> 0x00000020U));
                    vlSelfRef.tb__DOT__op_a[2U] = 0U;
                    vlSelfRef.tb__DOT__op_b[0U] = (IData)(vlSelfRef.tb__DOT__op_b_i);
                    vlSelfRef.tb__DOT__op_b[1U] = (IData)(
                                                          (vlSelfRef.tb__DOT__op_b_i 
                                                           >> 0x00000020U));
                    vlSelfRef.tb__DOT__op_b[2U] = 0U;
                    vlSelfRef.tb__DOT__in_vld_i = 1U;
                    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_9__DOT____Vrepeat8 = 1U;
                    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
                        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                                  "@(posedge tb.clk_i)");
                        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb.clk_i)", 
                                                                             "hdl/attack2_test.sv", 
                                                                             109);
                        tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_9__DOT____Vrepeat8 
                            = (tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_9__DOT____Vrepeat8 
                               - (IData)(1U));
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                                         nullptr, 
                                                         "hdl/attack2_test.sv", 
                                                         109);
                    vlSelfRef.tb__DOT__in_vld_i = 0U;
                    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency = 0U;
                    while ((1U & (~ (IData)(vlSelfRef.tb__DOT__out_vld_o)))) {
                        tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_10__DOT____Vrepeat9 = 1U;
                        while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_10__DOT____Vrepeat9)) {
                            Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                                      "@(posedge tb.clk_i)");
                            co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb.clk_i)", 
                                                                                "hdl/attack2_test.sv", 
                                                                                115);
                            tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_10__DOT____Vrepeat9 
                                = (tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_10__DOT____Vrepeat9 
                                   - (IData)(1U));
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                                             nullptr, 
                                                             "hdl/attack2_test.sv", 
                                                             115);
                        vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency 
                            = ((IData)(1U) + vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency);
                    }
                    tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_11__DOT____Vrepeat10 = 1U;
                    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_11__DOT____Vrepeat10)) {
                        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                                  "@(posedge tb.clk_i)");
                        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb.clk_i)", 
                                                                             "hdl/attack2_test.sv", 
                                                                             118);
                        tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_11__DOT____Vrepeat10 
                            = (tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_11__DOT____Vrepeat10 
                               - (IData)(1U));
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                                         nullptr, 
                                                         "hdl/attack2_test.sv", 
                                                         118);
                    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency);
                    if (VL_GTS_III(32, 0x00000042U, vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency)) {
                        vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret 
                            = (vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret 
                               | ((QData)((IData)(1U)) 
                                  << (0x0000003fU & vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)));
                        goto __Vlabel0;
                    }
                    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t);
                }
                __Vlabel0: ;
            }
            vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        if ((vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret 
             == vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__target_secret)) {
            VL_WRITEF_NX("  -> Result: SUCCESS! Guessed exactly: %h\n",1
                         , '#',64,vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret);
            vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__total_success_cnt 
                = ((IData)(1U) + vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__total_success_cnt);
        } else {
            VL_WRITEF_NX("  -> Result: FAILED!  Guessed: %h\n",1
                         , '#',64,vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret);
        }
        VL_WRITEF_NX("----------------------------------------\n",0);
        tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__s 
            = ((IData)(1U) + tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__s);
    }
    VL_WRITEF_NX("Total Exact Matches: %0d / %0d\n",2
                 , '~',32,vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__total_success_cnt
                 , '~',32,vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__NUM_SECRETS);
    VL_FINISH_MT("hdl/attack2_test.sv", 149, "");
    tb__DOT__p_stim__DOT__unnamedblk1_12__DOT____Vrepeat11 = 0x00000190U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_stim__DOT__unnamedblk1_12__DOT____Vrepeat11)) {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/tb.sv", 
                                                             201);
        tb__DOT__p_stim__DOT__unnamedblk1_12__DOT____Vrepeat11 
            = (tb__DOT__p_stim__DOT__unnamedblk1_12__DOT____Vrepeat11 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "hdl/tb.sv", 
                                         201);
    vlSelfRef.__VdlySet__tb__DOT__stim_end__v0 = 1U;
    VL_WRITEF_NX("TB> stimuli application ended\n",0);
    co_return;
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ tb__DOT__lat_sum;
    tb__DOT__lat_sum = 0;
    QData/*63:0*/ tb__DOT__lat_cnt;
    tb__DOT__lat_cnt = 0;
    QData/*63:0*/ tb__DOT__lat_min;
    tb__DOT__lat_min = 0;
    QData/*63:0*/ tb__DOT__lat_max;
    tb__DOT__lat_max = 0;
    IData/*31:0*/ tb__DOT__p_acq__DOT__unnamedblk1_13__DOT____Vrepeat12;
    tb__DOT__p_acq__DOT__unnamedblk1_13__DOT____Vrepeat12 = 0;
    IData/*31:0*/ tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk1_14__DOT____Vrepeat13;
    tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk1_14__DOT____Vrepeat13 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.tb__DOT__p_acq__DOT__status = VL_NEW(Vtb_tb_pkg__03a__03aprogress, vlSymsp, "TB"s);
    vlSelfRef.tb__DOT__p_acq__DOT__failingTests = ""s;
    tb__DOT__lat_sum = 0ULL;
    tb__DOT__lat_cnt = 0ULL;
    tb__DOT__lat_min = 0xffffffffffffffffULL;
    tb__DOT__lat_max = 0ULL;
    vlSelfRef.tb__DOT__out_rdy_i = 0U;
    vlSelfRef.tb__DOT__end_of_sim = 0U;
    do {
        Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "hdl/tb.sv", 
                                                             237);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001f40ULL, 
                                             nullptr, 
                                             "hdl/tb.sv", 
                                             237);
    } while ((1U & (~ (IData)(vlSelfRef.tb__DOT__stim_start))));
    VL_WRITEF_NX("TB> response acquisition started\n",0);
    tb__DOT__p_acq__DOT__unnamedblk1_13__DOT____Vrepeat12 = 1U;
    while (VL_LTS_III(32, 0U, tb__DOT__p_acq__DOT__unnamedblk1_13__DOT____Vrepeat12)) {
        {
            do {
                tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk1_14__DOT____Vrepeat13 = 1U;
                while (VL_LTS_III(32, 0U, tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk1_14__DOT____Vrepeat13)) {
                    Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                              "@(posedge tb.clk_i)");
                    co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk_i)", 
                                                                         "hdl/tb.sv", 
                                                                         248);
                    tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk1_14__DOT____Vrepeat13 
                        = (tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk1_14__DOT____Vrepeat13 
                           - (IData)(1U));
                }
                co_await vlSelfRef.__VdlySched.delay(0x0000000000001f40ULL, 
                                                     nullptr, 
                                                     "hdl/tb.sv", 
                                                     248);
                if (VL_UNLIKELY((vlSelfRef.tb__DOT__stim_end))) {
                    vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v0 = 1U;
                    VL_WRITEF_NX("response acquisition ended\n",0);
                    VL_FINISH_MT("hdl/tb.sv", 252, "");
                    goto __Vlabel0;
                }
            } while ((1U & (~ (IData)(vlSelfRef.tb__DOT__acq_trig))));
            __Vlabel0: ;
        }
        vlSelfRef.tb__DOT__p_acq__DOT__acqCnt = 0ULL;
        VL_WRITEF_NX("\nTB> ----------------------------------------------------------------------\nTB> %s\nTB> ----------------------------------------------------------------------\n\n\nTB> checking %00d vectors\n\n",2
                     , 'S',&(vlSelfRef.tb__DOT__test_name)
                     , '~',64,vlSelfRef.tb__DOT__num_stim);
        VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 266)->__VnoInFunc_reset(vlSymsp, vlSelfRef.tb__DOT__num_stim);
        do {
            vlSelfRef.tb__DOT__out_rdy_i = 1U;
            do {
                Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                          "@(posedge tb.clk_i)");
                co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk_i)", 
                                                                     "hdl/tb.sv", 
                                                                     276);
                co_await vlSelfRef.__VdlySched.delay(0x0000000000001f40ULL, 
                                                     nullptr, 
                                                     "hdl/tb.sv", 
                                                     276);
            } while ((1U & (~ (IData)(vlSelfRef.tb__DOT__in_vld_i))));
            vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__start_cyc 
                = vlSelfRef.tb__DOT__cyc;
            vlSelfRef.tb__DOT__op_a_tmp[0U] = vlSelfRef.tb__DOT__op_a[0U];
            vlSelfRef.tb__DOT__op_a_tmp[1U] = vlSelfRef.tb__DOT__op_a[1U];
            vlSelfRef.tb__DOT__op_a_tmp[2U] = vlSelfRef.tb__DOT__op_a[2U];
            vlSelfRef.tb__DOT__op_b_tmp[0U] = vlSelfRef.tb__DOT__op_b[0U];
            vlSelfRef.tb__DOT__op_b_tmp[1U] = vlSelfRef.tb__DOT__op_b[1U];
            vlSelfRef.tb__DOT__op_b_tmp[2U] = vlSelfRef.tb__DOT__op_b[2U];
            if ((2U & (IData)(vlSelfRef.tb__DOT__opcode_i))) {
                VL_MODDIVS_WWW(65, __Vtemp_2, vlSelfRef.tb__DOT__op_a_tmp, vlSelfRef.tb__DOT__op_b_tmp);
                vlSelfRef.tb__DOT__p_acq__DOT__res 
                    = (((QData)((IData)(__Vtemp_2[1U])) 
                        << 0x00000020U) | (QData)((IData)(__Vtemp_2[0U])));
                if ((0U == ((vlSelfRef.tb__DOT__op_b_tmp[0U] 
                             | vlSelfRef.tb__DOT__op_b_tmp[1U]) 
                            | vlSelfRef.tb__DOT__op_b_tmp[2U]))) {
                    vlSelfRef.tb__DOT__p_acq__DOT__res 
                        = (((QData)((IData)(vlSelfRef.tb__DOT__op_a_tmp[1U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__op_a_tmp[0U])));
                }
                do {
                    Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                              "@(posedge tb.clk_i)");
                    co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk_i)", 
                                                                         "hdl/tb.sv", 
                                                                         321);
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000001f40ULL, 
                                                         nullptr, 
                                                         "hdl/tb.sv", 
                                                         321);
                } while ((1U & (~ (IData)(vlSelfRef.tb__DOT__out_vld_o))));
                vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__end_cyc 
                    = vlSelfRef.tb__DOT__cyc;
                vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat 
                    = (vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__end_cyc 
                       - vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__start_cyc);
                vlSelfRef.tb__DOT__p_acq__DOT__act 
                    = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__res_inv_q)
                        ? (- vlSelfRef.tb__DOT__i_dut__DOT__out_mux)
                        : vlSelfRef.tb__DOT__i_dut__DOT__out_mux);
                vlSelfRef.tb__DOT__p_acq__DOT__opStr = "%"s;
            } else {
                VL_DIVS_WWW(65, __Vtemp_6, vlSelfRef.tb__DOT__op_a_tmp, vlSelfRef.tb__DOT__op_b_tmp);
                vlSelfRef.tb__DOT__p_acq__DOT__res 
                    = (((QData)((IData)(__Vtemp_6[1U])) 
                        << 0x00000020U) | (QData)((IData)(__Vtemp_6[0U])));
                if (((0U == ((vlSelfRef.tb__DOT__op_b_tmp[0U] 
                              | vlSelfRef.tb__DOT__op_b_tmp[1U]) 
                             | vlSelfRef.tb__DOT__op_b_tmp[2U])) 
                     & (~ (IData)(vlSelfRef.tb__DOT__opcode_i)))) {
                    vlSelfRef.tb__DOT__p_acq__DOT__res = 0xffffffffffffffffULL;
                } else if (((0U == ((vlSelfRef.tb__DOT__op_b_tmp[0U] 
                                     | vlSelfRef.tb__DOT__op_b_tmp[1U]) 
                                    | vlSelfRef.tb__DOT__op_b_tmp[2U])) 
                            & (IData)(vlSelfRef.tb__DOT__opcode_i))) {
                    vlSelfRef.tb__DOT__p_acq__DOT__res = 0xffffffffffffffffULL;
                } else if ((((0U == ((vlSelfRef.tb__DOT__op_a_tmp[0U] 
                                      | (0x80000000U 
                                         ^ vlSelfRef.tb__DOT__op_a_tmp[1U])) 
                                     | (1U ^ vlSelfRef.tb__DOT__op_a_tmp[2U]))) 
                             & (0U == (((~ vlSelfRef.tb__DOT__op_b_tmp[0U]) 
                                        | (~ vlSelfRef.tb__DOT__op_b_tmp[1U])) 
                                       | (1U ^ vlSelfRef.tb__DOT__op_b_tmp[2U])))) 
                            & (IData)(vlSelfRef.tb__DOT__opcode_i))) {
                    vlSelfRef.tb__DOT__p_acq__DOT__res = 0x8000000000000000ULL;
                }
                do {
                    Vtb___024root____VbeforeTrig_h2004b266__0(vlSelf, 
                                                              "@(posedge tb.clk_i)");
                    co_await vlSelfRef.__VtrigSched_h2004b266__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk_i)", 
                                                                         "hdl/tb.sv", 
                                                                         299);
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000001f40ULL, 
                                                         nullptr, 
                                                         "hdl/tb.sv", 
                                                         299);
                } while ((1U & (~ (IData)(vlSelfRef.tb__DOT__out_vld_o))));
                vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__end_cyc 
                    = vlSelfRef.tb__DOT__cyc;
                vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat 
                    = (vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__end_cyc 
                       - vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__start_cyc);
                vlSelfRef.tb__DOT__p_acq__DOT__act 
                    = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__res_inv_q)
                        ? (- vlSelfRef.tb__DOT__i_dut__DOT__out_mux)
                        : vlSelfRef.tb__DOT__i_dut__DOT__out_mux);
                vlSelfRef.tb__DOT__p_acq__DOT__opStr = "/"s;
            }
            vlSelfRef.tb__DOT__p_acq__DOT__ok = (vlSelfRef.tb__DOT__p_acq__DOT__res 
                                                 == vlSelfRef.tb__DOT__p_acq__DOT__act);
            tb__DOT__lat_cnt = (1ULL + tb__DOT__lat_cnt);
            tb__DOT__lat_sum = (tb__DOT__lat_sum + vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat);
            if ((vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat 
                 < tb__DOT__lat_min)) {
                tb__DOT__lat_min = vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat;
            }
            if ((vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat 
                 > tb__DOT__lat_max)) {
                tb__DOT__lat_max = vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat;
            }
            if (VL_UNLIKELY(((1U | (1U & (~ (IData)(vlSelfRef.tb__DOT__p_acq__DOT__ok))))))) {
                if (vlSelfRef.tb__DOT__p_acq__DOT__ok) {
                    VL_SFORMAT_NX(vlSelfRef.tb__DOT__p_acq__DOT__tmpstr
                                  ,"vector: %04d> %0d %s %0d = %0d == %0d ",6
                                  , '~',64,vlSelfRef.tb__DOT__p_acq__DOT__acqCnt
                                  , '~',65,vlSelfRef.tb__DOT__op_a_tmp.data()
                                  , 'S',&(vlSelfRef.tb__DOT__p_acq__DOT__opStr)
                                  , '~',65,vlSelfRef.tb__DOT__op_b_tmp.data()
                                  , '~',64,vlSelfRef.tb__DOT__p_acq__DOT__res
                                  , '~',64,vlSelfRef.tb__DOT__p_acq__DOT__act);
                } else {
                    VL_SFORMAT_NX(vlSelfRef.tb__DOT__p_acq__DOT__tmpstr
                                  ,"vector: %04d> %0d %s %0d = %0d != %0d -> error!!",6
                                  , '~',64,vlSelfRef.tb__DOT__p_acq__DOT__acqCnt
                                  , '~',65,vlSelfRef.tb__DOT__op_a_tmp.data()
                                  , 'S',&(vlSelfRef.tb__DOT__p_acq__DOT__opStr)
                                  , '~',65,vlSelfRef.tb__DOT__op_b_tmp.data()
                                  , '~',64,vlSelfRef.tb__DOT__p_acq__DOT__res
                                  , '~',64,vlSelfRef.tb__DOT__p_acq__DOT__act);
                }
                VL_WRITEF_NX("TB> %s [Latency: %0d cycles]\n",2
                             , 'S',&(vlSelfRef.tb__DOT__p_acq__DOT__tmpstr)
                             , '#',64,vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__p_acq__DOT__ok)))) {
                VL_SFORMAT_NX(vlSelfRef.tb__DOT__p_acq__DOT__failingTests
                              ,"%sTB> %s\n",2, 'S',&(vlSelfRef.tb__DOT__p_acq__DOT__failingTests)
                              , 'S',&(vlSelfRef.tb__DOT__p_acq__DOT__tmpstr));
            }
            VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 359)->__VnoInFunc_addRes(vlSymsp, 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.tb__DOT__p_acq__DOT__ok))));
            VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 360)->__VnoInFunc_print(vlSymsp);
            vlSelfRef.tb__DOT__p_acq__DOT__acqCnt = 
                (1ULL + vlSelfRef.tb__DOT__p_acq__DOT__acqCnt);
        } while (VL_LTS_IQQ(64, vlSelfRef.tb__DOT__p_acq__DOT__acqCnt, vlSelfRef.tb__DOT__num_stim));
        tb__DOT__p_acq__DOT__unnamedblk1_13__DOT____Vrepeat12 
            = (tb__DOT__p_acq__DOT__unnamedblk1_13__DOT____Vrepeat12 
               - (IData)(1U));
    }
    VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 369)->__VnoInFunc_printToFile(vlSymsp, "summary.rep"s, 1U);
    if ((0ULL == VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 371)
         ->__PVT__totErrCnt)) {
        VL_WRITEF_NX("TB> ----------------------------------------------------------------------\nTB> PASSED %0d VECTORS\n",1
                     , '~',64,VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 373)
                     ->__PVT__totAcqCnt);
    } else {
        VL_WRITEF_NX("TB> ----------------------------------------------------------------------\n\nTB> FAILED %0d OF %0d VECTORS\n\nTB> failing tests:\nTB%s\n",3
                     , '~',64,VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 377)
                     ->__PVT__totErrCnt, '~',64,VL_NULL_CHECK(vlSelfRef.tb__DOT__p_acq__DOT__status, "hdl/tb.sv", 377)
                     ->__PVT__totAcqCnt, 'S',&(vlSelfRef.tb__DOT__p_acq__DOT__failingTests));
    }
    VL_WRITEF_NX("TB> ----------------------------------------------------------------------\n\n",0);
    if (VL_UNLIKELY(((0ULL != tb__DOT__lat_cnt)))) {
        vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk6__DOT__lat_avg 
            = (VL_ITOR_D_Q(64, tb__DOT__lat_sum) / 
               VL_ITOR_D_Q(64, tb__DOT__lat_cnt));
        VL_WRITEF_NX("TB> ----------------------------------------------------------------------\nTB> LATENCY SUMMARY (cycles): count=%0d  min=%0d  max=%0d  avg=%0f\nTB> ----------------------------------------------------------------------\n\n",4
                     , '#',64,tb__DOT__lat_cnt, '#',64,tb__DOT__lat_min
                     , '#',64,tb__DOT__lat_max, 'D',vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk6__DOT__lat_avg);
    }
    vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v1 = 1U;
    VL_FINISH_MT("hdl/tb.sv", 394, "");
    co_return;
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        do {
            vlSelfRef.tb__DOT__clk_i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                                 nullptr, 
                                                 "hdl/tb.sv", 
                                                 94);
            vlSelfRef.tb__DOT__clk_i = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                                 nullptr, 
                                                 "hdl/tb.sv", 
                                                 95);
        } while ((1U & (~ (IData)(vlSelfRef.tb__DOT__end_of_sim))));
        vlSelfRef.tb__DOT__clk_i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "hdl/tb.sv", 
                                             98);
        vlSelfRef.tb__DOT__clk_i = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "hdl/tb.sv", 
                                             99);
    }
    co_return;
}

void Vtb___024root___eval_triggers_vec__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers_vec__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb__DOT__rst_ni)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb__DOT__clk_i) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 
        = vlSelfRef.tb__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0 
        = vlSelfRef.tb__DOT__rst_ni;
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ tb__DOT__i_dut__DOT__lzc_b_input;
    tb__DOT__i_dut__DOT__lzc_b_input = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    VL_ZERO_W(65, __VdfgRegularize_h6e95ff9d_0_0);
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    // Body
    vlSelfRef.tb__DOT__in_rdy_o = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (1U 
                                                & ((IData)(vlSelfRef.tb__DOT__opcode_i) 
                                                   & ((IData)(
                                                              (vlSelfRef.tb__DOT__op_a_i 
                                                               >> 0x0000003fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__op_b_i 
                                                                 >> 0x0000003fU)))));
    vlSelfRef.tb__DOT__i_dut__DOT__stall_en_d = vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q;
    vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q;
    vlSelfRef.tb__DOT__out_vld_o = 0U;
    if ((0U != (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q) 
                 & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q)))) {
                vlSelfRef.tb__DOT__out_vld_o = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            vlSelfRef.tb__DOT__out_vld_o = 1U;
        }
    }
    vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q;
    vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__state_d = vlSelfRef.tb__DOT__i_dut__DOT__state_q;
    if ((0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        vlSelfRef.tb__DOT__in_rdy_o = 1U;
        vlSelfRef.tb__DOT__i_dut__DOT__load_en = 0U;
        if (vlSelfRef.tb__DOT__in_vld_i) {
            vlSelfRef.tb__DOT__in_rdy_o = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__stall_en_d 
                = (0x4cU > (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lfsr_q));
            vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__state_d = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__load_en = 1U;
        }
    } else {
        if ((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if ((0x40U != (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q))) {
                vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q)));
            }
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q)))) {
                    vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 1U;
                    vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en 
                        = vlSelfRef.tb__DOT__i_dut__DOT__ab_comp;
                }
            }
            if (vlSelfRef.tb__DOT__i_dut__DOT__algo_done_now) {
                vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 1U;
            }
            if (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_now) 
                 & ((~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q)) 
                    | (0x40U <= (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q))))) {
                vlSelfRef.tb__DOT__i_dut__DOT__state_d = 2U;
            }
            if (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q) 
                 & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q)))) {
                vlSelfRef.tb__DOT__i_dut__DOT__state_d = 2U;
                if (vlSelfRef.tb__DOT__out_rdy_i) {
                    vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if (vlSelfRef.tb__DOT__out_rdy_i) {
                vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
        }
        vlSelfRef.tb__DOT__i_dut__DOT__load_en = 0U;
    }
    if (vlSelfRef.tb__DOT__flush_i) {
        vlSelfRef.tb__DOT__in_rdy_o = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = 0U;
        vlSelfRef.tb__DOT__out_vld_o = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__load_en = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       ((vlSelfRef.tb__DOT__op_b_i 
                                                         >> 0x0000003fU) 
                                                        & (IData)(vlSelfRef.tb__DOT__opcode_i)));
    __VdfgRegularize_h6e95ff9d_0_10 = (IData)(((vlSelfRef.tb__DOT__op_a_i 
                                                >> 0x0000003fU) 
                                               & (IData)(vlSelfRef.tb__DOT__opcode_i)));
    vlSelfRef.tb__DOT__i_dut__DOT__add_tmp = (vlSelfRef.tb__DOT__i_dut__DOT__op_a_q 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)))))));
    vlSelfRef.tb__DOT__i_dut__DOT__add_mux = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                               ? vlSelfRef.tb__DOT__op_a_i
                                               : vlSelfRef.tb__DOT__i_dut__DOT__op_b_q);
    tb__DOT__i_dut__DOT__lzc_b_input = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                         ? (~ vlSelfRef.tb__DOT__op_b_i)
                                         : vlSelfRef.tb__DOT__op_b_i);
    if (((0xffffffffffffffffULL == vlSelfRef.tb__DOT__op_a_i) 
         & (IData)(__VdfgRegularize_h6e95ff9d_0_10))) {
        __VdfgRegularize_h6e95ff9d_0_0[0U] = (1U | 
                                              ((IData)(
                                                       (~ vlSelfRef.tb__DOT__op_a_i)) 
                                               << 1U));
        __VdfgRegularize_h6e95ff9d_0_0[1U] = (((IData)(
                                                       (~ vlSelfRef.tb__DOT__op_a_i)) 
                                               >> 0x0000001fU) 
                                              | ((IData)(
                                                         ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                          >> 0x00000020U)) 
                                                 << 1U));
        __VdfgRegularize_h6e95ff9d_0_0[2U] = ((IData)(
                                                      ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                       >> 0x00000020U)) 
                                              >> 0x0000001fU);
    } else if (__VdfgRegularize_h6e95ff9d_0_10) {
        __VdfgRegularize_h6e95ff9d_0_0[0U] = ((IData)(
                                                      (~ vlSelfRef.tb__DOT__op_a_i)) 
                                              << 1U);
        __VdfgRegularize_h6e95ff9d_0_0[1U] = (((IData)(
                                                       (~ vlSelfRef.tb__DOT__op_a_i)) 
                                               >> 0x0000001fU) 
                                              | ((IData)(
                                                         ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                          >> 0x00000020U)) 
                                                 << 1U));
        __VdfgRegularize_h6e95ff9d_0_0[2U] = ((IData)(
                                                      ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                       >> 0x00000020U)) 
                                              >> 0x0000001fU);
    } else {
        __VdfgRegularize_h6e95ff9d_0_0[0U] = (IData)(vlSelfRef.tb__DOT__op_a_i);
        __VdfgRegularize_h6e95ff9d_0_0[1U] = (IData)(
                                                     (vlSelfRef.tb__DOT__op_a_i 
                                                      >> 0x00000020U));
        __VdfgRegularize_h6e95ff9d_0_0[2U] = 0U;
    }
    __VdfgRegularize_h6e95ff9d_0_22 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 6U)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 7U)))) 
                                       | ((2U & ((IData)(
                                                         (tb__DOT__i_dut__DOT__lzc_b_input 
                                                          >> 4U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 5U)))));
    __VdfgRegularize_h6e95ff9d_0_21 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x0000000eU)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x0000000cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x0000000dU))))));
    __VdfgRegularize_h6e95ff9d_0_3 = (3U & ((IData)(
                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                     >> 0x00000014U)) 
                                            | ((2U 
                                                & ((IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000016U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x00000017U))))));
    __VdfgRegularize_h6e95ff9d_0_27 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x00000026U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x00000024U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x00000025U))))));
    __VdfgRegularize_h6e95ff9d_0_28 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 0x0000001eU)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000001fU)))) 
                                       | ((2U & ((IData)(
                                                         (tb__DOT__i_dut__DOT__lzc_b_input 
                                                          >> 0x0000001cU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x0000001dU)))));
    __VdfgRegularize_h6e95ff9d_0_4 = (3U & ((IData)(
                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                     >> 0x0000002cU)) 
                                            | ((2U 
                                                & ((IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x0000002eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x0000002fU))))));
    __VdfgRegularize_h6e95ff9d_0_34 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 0x00000036U)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x00000037U)))) 
                                       | ((2U & ((IData)(
                                                         (tb__DOT__i_dut__DOT__lzc_b_input 
                                                          >> 0x00000034U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x00000035U)))));
    __VdfgRegularize_h6e95ff9d_0_33 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x0000003eU)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x0000003cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x0000003dU))))));
    __VdfgRegularize_h6e95ff9d_0_24 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               >> 5U)) 
                                        | (1U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 7U))) 
                                       | ((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 3U)) 
                                          | (1U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                   >> 5U))));
    __VdfgRegularize_h6e95ff9d_0_23 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               << 0x00000012U) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 0x0000000eU)) 
                                             | ((2U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                      >> 0x0000000dU)))));
    __VdfgRegularize_h6e95ff9d_0_5 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                              << 0x0000000cU) 
                                             | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                >> 0x00000014U)) 
                                            | ((2U 
                                                & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                   >> 0x00000015U)) 
                                               | (1U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                     >> 0x00000017U)))));
    __VdfgRegularize_h6e95ff9d_0_29 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               << 0x0000001aU) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 6U)) 
                                             | ((2U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                      >> 5U)))));
    __VdfgRegularize_h6e95ff9d_0_30 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               >> 0x0000001dU)) 
                                        | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                           >> 0x0000001fU)) 
                                       | ((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 0x0000001bU)) 
                                          | (1U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                   >> 0x0000001dU))));
    __VdfgRegularize_h6e95ff9d_0_6 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                              << 0x00000014U) 
                                             | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                >> 0x0000000cU)) 
                                            | ((2U 
                                                & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                     >> 0x0000000fU)))));
    __VdfgRegularize_h6e95ff9d_0_36 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               >> 0x00000015U)) 
                                        | (1U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x00000017U))) 
                                       | ((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x00000013U)) 
                                          | (1U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                   >> 0x00000015U))));
    __VdfgRegularize_h6e95ff9d_0_35 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               << 2U) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x0000001eU)) 
                                             | ((2U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                      >> 0x0000001dU)))));
    __VdfgRegularize_h6e95ff9d_0_20 = (3U & (((2U & 
                                               ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000000aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x0000000bU)))) 
                                             | ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 8U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_21))));
    __VdfgRegularize_h6e95ff9d_0_19 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x0000001aU)) 
                                             | (((2U 
                                                  & ((IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x00000018U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (tb__DOT__i_dut__DOT__lzc_b_input 
                                                               >> 0x00000019U)))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_28))));
    __VdfgRegularize_h6e95ff9d_0_18 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 0x0000002aU)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000002bU)))) 
                                       | (((2U & ((IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x00000028U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000029U)))) 
                                          | (IData)(__VdfgRegularize_h6e95ff9d_0_4)));
    __VdfgRegularize_h6e95ff9d_0_17 = (3U & (((2U & 
                                               ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000003aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x0000003bU)))) 
                                             | ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x00000038U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_33))));
    __VdfgRegularize_h6e95ff9d_0_15 = (3U & (((2U & 
                                               (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                >> 9U)) 
                                              | (1U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 0x0000000bU))) 
                                             | (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                  << 0x00000018U) 
                                                 | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 8U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_23))));
    __VdfgRegularize_h6e95ff9d_0_14 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               << 6U) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 0x0000001aU)) 
                                             | (((2U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                     >> 0x00000017U)) 
                                                 | (1U 
                                                    & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                       >> 0x00000019U))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_30))));
    __VdfgRegularize_h6e95ff9d_0_13 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               >> 9U)) 
                                        | (1U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x0000000bU))) 
                                       | (((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                  >> 7U)) 
                                           | (1U & 
                                              (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               >> 9U))) 
                                          | (IData)(__VdfgRegularize_h6e95ff9d_0_6)));
    __VdfgRegularize_h6e95ff9d_0_12 = (3U & (((2U & 
                                               (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                >> 0x00000019U)) 
                                              | (1U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 0x0000001bU))) 
                                             | (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                  << 8U) 
                                                 | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 0x00000018U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_35))));
    __VdfgRegularize_h6e95ff9d_0_25 = ((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                                       | (((2U & ((IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x00000012U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000013U)))) 
                                          | (((2U & 
                                               ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x00000010U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000011U)))) 
                                             | (IData)(__VdfgRegularize_h6e95ff9d_0_19))));
    __VdfgRegularize_h6e95ff9d_0_16 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x00000032U)) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
                                                | (((2U 
                                                     & ((IData)(
                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                 >> 0x00000030U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                  >> 0x00000031U)))) 
                                                   | (IData)(__VdfgRegularize_h6e95ff9d_0_17)))));
    __VdfgRegularize_h6e95ff9d_0_26 = ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                       | (((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                  >> 0x00000011U)) 
                                           | (1U & 
                                              (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               >> 0x00000013U))) 
                                          | (((2U & 
                                               (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                >> 0x0000000fU)) 
                                              | (1U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 0x00000011U))) 
                                             | (IData)(__VdfgRegularize_h6e95ff9d_0_14))));
    __VdfgRegularize_h6e95ff9d_0_11 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               << 0x0000000eU) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x00000012U)) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                | (((2U 
                                                     & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                        >> 0x0000000fU)) 
                                                    | (1U 
                                                       & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                          >> 0x00000011U))) 
                                                   | (IData)(__VdfgRegularize_h6e95ff9d_0_12)))));
    __VdfgRegularize_h6e95ff9d_0_31 = (3U & ((IData)(__VdfgRegularize_h6e95ff9d_0_27) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_18) 
                                                | (((2U 
                                                     & ((IData)(
                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                 >> 0x00000022U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                  >> 0x00000023U)))) 
                                                   | ((IData)(
                                                              (tb__DOT__i_dut__DOT__lzc_b_input 
                                                               >> 0x00000020U)) 
                                                      | (IData)(__VdfgRegularize_h6e95ff9d_0_16))))));
    __VdfgRegularize_h6e95ff9d_0_32 = (3U & ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_13) 
                                                | (((2U 
                                                     & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                          >> 3U))) 
                                                   | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                      | (IData)(__VdfgRegularize_h6e95ff9d_0_11))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 2U)) 
                                                     | ((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
                                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
                                                           | ((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
                                                              | (((2U 
                                                                   & ((IData)(tb__DOT__i_dut__DOT__lzc_b_input) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(
                                                                               (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                                >> 1U)))) 
                                                                 | (IData)(__VdfgRegularize_h6e95ff9d_0_31))))))))
                                                 ? 
                                                ((0x0000003fU 
                                                  & ((0U 
                                                      != (IData)(__VdfgRegularize_h6e95ff9d_0_31))
                                                      ? 
                                                     ((0U 
                                                       != (IData)(__VdfgRegularize_h6e95ff9d_0_16))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_17))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_33))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003eU))))
                                                          ? 
                                                         (1U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(
                                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                                >> 0x0000003fU)))))))
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003dU)))
                                                           ? 2U
                                                           : 3U))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003aU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003bU)))
                                                           ? 4U
                                                           : 5U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000039U)))
                                                           ? 6U
                                                           : 7U)))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_34))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x00000037U)))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000036U)))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x00000035U)))
                                                            ? 0x0aU
                                                            : 0x0bU)))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000032U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000033U)))
                                                           ? 0x0cU
                                                           : 0x0dU)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000031U)))
                                                           ? 0x0eU
                                                           : 0x0fU))))
                                                       : 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_18))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_4))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002eU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002fU)))
                                                           ? 0x10U
                                                           : 0x11U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002dU)))
                                                           ? 0x12U
                                                           : 0x13U))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x0000002bU)))
                                                          ? 0x14U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002aU)))
                                                           ? 0x15U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x00000029U)))
                                                            ? 0x16U
                                                            : 0x17U))))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_27))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000026U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000027U)))
                                                           ? 0x18U
                                                           : 0x19U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000025U)))
                                                           ? 0x1aU
                                                           : 0x1bU))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000022U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000023U)))
                                                           ? 0x1cU
                                                           : 0x1dU)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000021U)))
                                                           ? 0x1eU
                                                           : 0x1fU)))))
                                                      : 
                                                     ((0U 
                                                       != (IData)(__VdfgRegularize_h6e95ff9d_0_25))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_19))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_28))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x0000001fU)))
                                                          ? 0x20U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000001eU)))
                                                           ? 0x21U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x0000001dU)))
                                                            ? 0x22U
                                                            : 0x23U)))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000001aU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000001bU)))
                                                           ? 0x24U
                                                           : 0x25U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000019U)))
                                                           ? 0x26U
                                                           : 0x27U)))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_3))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000016U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000017U)))
                                                           ? 0x28U
                                                           : 0x29U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000015U)))
                                                           ? 0x2aU
                                                           : 0x2bU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x00000013U)))
                                                          ? 0x2cU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000012U)))
                                                           ? 0x2dU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x00000011U)))
                                                            ? 0x2eU
                                                            : 0x2fU)))))
                                                       : 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_20))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_21))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000eU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000fU)))
                                                           ? 0x30U
                                                           : 0x31U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000dU)))
                                                           ? 0x32U
                                                           : 0x33U))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000aU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000bU)))
                                                           ? 0x34U
                                                           : 0x35U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 9U)))
                                                           ? 0x36U
                                                           : 0x37U)))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_22))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 6U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 7U)))
                                                           ? 0x38U
                                                           : 0x39U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 5U)))
                                                           ? 0x3aU
                                                           : 0x3bU))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 2U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 3U)))
                                                           ? 0x3cU
                                                           : 0x3dU)
                                                          : 
                                                         (0x3eU 
                                                          | (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(
                                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                                >> 1U))))))))))))) 
                                                 - 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                         << 0x0000001eU) 
                                                        | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                           >> 2U)) 
                                                       | ((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
                                                          | ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_26) 
                                                                | (((2U 
                                                                     & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                          >> 1U))) 
                                                                   | (IData)(__VdfgRegularize_h6e95ff9d_0_32))))))))
                                                   ? 
                                                  (0x0000003fU 
                                                   & ((0U 
                                                       != (IData)(__VdfgRegularize_h6e95ff9d_0_32))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_11))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_12))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_35))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                            >> 0x0000001eU))
                                                           ? 
                                                          (1U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                             >> 0x0000001fU))))))
                                                           : 
                                                          ((0x20000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 2U
                                                            : 3U))
                                                          : 
                                                         ((0x08000000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 4U
                                                           : 
                                                          ((0x04000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 5U
                                                            : 
                                                           ((0x02000000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 6U
                                                             : 7U))))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_36))
                                                          ? 
                                                         ((0x00800000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 8U
                                                           : 
                                                          ((0x00400000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 9U
                                                            : 
                                                           ((0x00200000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x0aU
                                                             : 0x0bU)))
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                               >> 0x00000012U)))
                                                           ? 
                                                          ((0x00080000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x0cU
                                                            : 0x0dU)
                                                           : 
                                                          ((0x00020000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x0eU
                                                            : 0x0fU))))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_13))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_6))
                                                          ? 
                                                         ((0x00008000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 0x10U
                                                           : 
                                                          ((0x00004000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x11U
                                                            : 
                                                           ((0x00002000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x12U
                                                             : 0x13U)))
                                                          : 
                                                         ((0x00000800U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 0x14U
                                                           : 
                                                          ((0x00000400U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x15U
                                                            : 
                                                           ((0x00000200U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x16U
                                                             : 0x17U))))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_29))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                               >> 6U)))
                                                           ? 
                                                          ((0x00000080U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x18U
                                                            : 0x19U)
                                                           : 
                                                          ((0x00000020U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x1aU
                                                            : 0x1bU))
                                                          : 
                                                         ((8U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 0x1cU
                                                           : 
                                                          ((4U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x1dU
                                                            : 
                                                           ((2U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x1eU
                                                             : 0x1fU))))))
                                                       : 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_26))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_14))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_30))
                                                          ? 
                                                         ((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                           >> 0x0000001fU)
                                                           ? 0x20U
                                                           : 
                                                          ((0x40000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x21U
                                                            : 
                                                           ((0x20000000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x22U
                                                             : 0x23U)))
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 0x0000001aU)))
                                                           ? 
                                                          ((0x08000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x24U
                                                            : 0x25U)
                                                           : 
                                                          ((0x02000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x26U
                                                            : 0x27U)))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_5))
                                                          ? 
                                                         ((0x00800000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                           ? 0x28U
                                                           : 
                                                          ((0x00400000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x29U
                                                            : 
                                                           ((0x00200000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x2aU
                                                             : 0x2bU)))
                                                          : 
                                                         ((0x00080000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                           ? 0x2cU
                                                           : 
                                                          ((0x00040000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x2dU
                                                            : 
                                                           ((0x00020000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x2eU
                                                             : 0x2fU)))))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_15))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_23))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 0x0000000eU)))
                                                           ? 
                                                          ((0x00008000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x30U
                                                            : 0x31U)
                                                           : 
                                                          ((0x00002000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x32U
                                                            : 0x33U))
                                                          : 
                                                         ((0x00000800U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                           ? 0x34U
                                                           : 
                                                          ((0x00000400U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x35U
                                                            : 
                                                           ((0x00000200U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x36U
                                                             : 0x37U))))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_24))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 6U)))
                                                           ? 
                                                          ((0x00000080U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x38U
                                                            : 0x39U)
                                                           : 
                                                          ((0x00000020U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x3aU
                                                            : 0x3bU))
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 2U)))
                                                           ? 
                                                          ((8U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x3cU
                                                            : 0x3dU)
                                                           : 
                                                          (0x3eU 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                             >> 1U))))))))))))
                                                   : 0x00000040U))
                                                 : 0x00000040U);
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb__DOT__rst_ni) {
        vlSelfRef.tb__DOT__cyc = (1ULL + vlSelfRef.tb__DOT__cyc);
        vlSelfRef.tb__DOT__i_dut__DOT__lfsr_q = ((0x0000007eU 
                                                  & ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__lfsr_q) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (3U 
                                                                    & ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__lfsr_q) 
                                                                       >> 5U)))));
        vlSelfRef.tb__DOT__i_dut__DOT__res_q = (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__res_reg_en)
                                                  ? 
                                                 ((vlSelfRef.tb__DOT__i_dut__DOT__res_q 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelfRef.tb__DOT__i_dut__DOT__ab_comp)))
                                                  : vlSelfRef.tb__DOT__i_dut__DOT__res_q) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)))))));
        vlSelfRef.tb__DOT__i_dut__DOT__op_a_q = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en)
                                                  ? 
                                                 (((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                   & (IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en))
                                                   ? 
                                                  (vlSelfRef.tb__DOT__i_dut__DOT__add_mux 
                                                   + vlSelfRef.tb__DOT__i_dut__DOT__add_tmp)
                                                   : 
                                                  (vlSelfRef.tb__DOT__i_dut__DOT__add_tmp 
                                                   - vlSelfRef.tb__DOT__i_dut__DOT__add_mux))
                                                  : vlSelfRef.tb__DOT__i_dut__DOT__op_a_q);
        vlSelfRef.tb__DOT__i_dut__DOT__cnt_q = (0x0000007fU 
                                                & ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__cnt_q))
                                                     ? (IData)(vlSelfRef.tb__DOT__i_dut__DOT__cnt_q)
                                                     : 
                                                    ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__cnt_q) 
                                                     - (IData)(1U)))));
        vlSelfRef.tb__DOT__i_dut__DOT__op_b_q = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en)
                                                  ? 
                                                 ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                                   ? 
                                                  VL_SHIFTL_QQI(64,64,8, vlSelfRef.tb__DOT__op_b_i, 
                                                                (0x000000ffU 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                   : 
                                                  (((QData)((IData)(vlSelfRef.tb__DOT__i_dut__DOT__comp_inv_q)) 
                                                    << 0x0000003fU) 
                                                   | (vlSelfRef.tb__DOT__i_dut__DOT__op_b_q 
                                                      >> 1U)))
                                                  : vlSelfRef.tb__DOT__i_dut__DOT__op_b_q);
        vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q = vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d;
        vlSelfRef.tb__DOT__i_dut__DOT__state_q = vlSelfRef.tb__DOT__i_dut__DOT__state_d;
    } else {
        vlSelfRef.tb__DOT__cyc = 0ULL;
        vlSelfRef.tb__DOT__i_dut__DOT__lfsr_q = 0x1fU;
        vlSelfRef.tb__DOT__i_dut__DOT__res_q = 0ULL;
        vlSelfRef.tb__DOT__i_dut__DOT__op_a_q = 0ULL;
        vlSelfRef.tb__DOT__i_dut__DOT__cnt_q = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__op_b_q = 0ULL;
        vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__state_q = 0U;
    }
    vlSelfRef.tb__DOT__i_dut__DOT__res_inv_q = ((IData)(vlSelfRef.tb__DOT__rst_ni) 
                                                && ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                                     ? 
                                                    (((0ULL 
                                                       != vlSelfRef.tb__DOT__op_b_i) 
                                                      | ((IData)(vlSelfRef.tb__DOT__opcode_i) 
                                                         >> 1U)) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                                     : (IData)(vlSelfRef.tb__DOT__i_dut__DOT__res_inv_q)));
    vlSelfRef.tb__DOT__i_dut__DOT__rem_sel_q = ((IData)(vlSelfRef.tb__DOT__rst_ni) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                                        ? 
                                                       ((IData)(vlSelfRef.tb__DOT__opcode_i) 
                                                        >> 1U)
                                                        : (IData)(vlSelfRef.tb__DOT__i_dut__DOT__rem_sel_q))));
    vlSelfRef.tb__DOT__i_dut__DOT__op_b_zero_q = ((IData)(vlSelfRef.tb__DOT__rst_ni) 
                                                  && ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                                       ? 
                                                      (0ULL 
                                                       == vlSelfRef.tb__DOT__op_b_i)
                                                       : (IData)(vlSelfRef.tb__DOT__i_dut__DOT__op_b_zero_q)));
    vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q = 
        ((IData)(vlSelfRef.tb__DOT__rst_ni) && ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                                 ? 
                                                VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, 
                                                                         (0x000000ffU 
                                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))
                                                 : (IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q)));
    vlSelfRef.tb__DOT__i_dut__DOT__comp_inv_q = ((IData)(vlSelfRef.tb__DOT__rst_ni) 
                                                 && ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : (IData)(vlSelfRef.tb__DOT__i_dut__DOT__comp_inv_q)));
    vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q = ((IData)(vlSelfRef.tb__DOT__rst_ni) 
                                                 && (IData)(vlSelfRef.tb__DOT__i_dut__DOT__stall_en_d));
    vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q = ((IData)(vlSelfRef.tb__DOT__rst_ni) 
                                                  && (IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d));
    vlSelfRef.tb__DOT__i_dut__DOT__out_mux = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__rem_sel_q)
                                               ? vlSelfRef.tb__DOT__i_dut__DOT__op_a_q
                                               : vlSelfRef.tb__DOT__i_dut__DOT__res_q);
    vlSelfRef.tb__DOT__i_dut__DOT__algo_done_now = 
        ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q) 
         | (0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__cnt_q)));
    vlSelfRef.tb__DOT__i_dut__DOT__ab_comp = (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__op_b_zero_q) 
                                               | (0U 
                                                  != vlSelfRef.tb__DOT__i_dut__DOT__op_a_q)) 
                                              & (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__comp_inv_q) 
                                                  ^ 
                                                  (vlSelfRef.tb__DOT__i_dut__DOT__op_a_q 
                                                   > vlSelfRef.tb__DOT__i_dut__DOT__op_b_q)) 
                                                 | (vlSelfRef.tb__DOT__i_dut__DOT__op_b_q 
                                                    == vlSelfRef.tb__DOT__i_dut__DOT__op_a_q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: serdiv.sv:180: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb.i_dut.p_fsm", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',2,(IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q));
                VL_STOP_MT("../common/../../../core/serdiv.sv", 180, "");
            }
        }
    }
    vlSelfRef.tb__DOT__i_dut__DOT__res_reg_en = 0U;
    if ((0U != (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q)))) {
                    vlSelfRef.tb__DOT__i_dut__DOT__res_reg_en = 1U;
                }
            }
        }
    }
}

void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb__DOT__stim_start__v0) {
        vlSelfRef.__VdlySet__tb__DOT__stim_start__v0 = 0U;
        vlSelfRef.tb__DOT__stim_start = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__stim_end__v0) {
        vlSelfRef.__VdlySet__tb__DOT__stim_end__v0 = 0U;
        vlSelfRef.tb__DOT__stim_end = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__acq_trig__v0) {
        vlSelfRef.__VdlySet__tb__DOT__acq_trig__v0 = 0U;
        vlSelfRef.tb__DOT__acq_trig = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__acq_trig__v1) {
        vlSelfRef.__VdlySet__tb__DOT__acq_trig__v1 = 0U;
        vlSelfRef.tb__DOT__acq_trig = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v0) {
        vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v0 = 0U;
        vlSelfRef.tb__DOT__end_of_sim = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v1) {
        vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v1 = 0U;
        vlSelfRef.tb__DOT__end_of_sim = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__rst_ni__v0) {
        vlSelfRef.__VdlySet__tb__DOT__rst_ni__v0 = 0U;
        vlSelfRef.tb__DOT__rst_ni = 1U;
    }
}

void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ tb__DOT__i_dut__DOT__lzc_b_input;
    tb__DOT__i_dut__DOT__lzc_b_input = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    VL_ZERO_W(65, __VdfgRegularize_h6e95ff9d_0_0);
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_10 = (IData)(((vlSelfRef.tb__DOT__op_a_i 
                                                >> 0x0000003fU) 
                                               & (IData)(vlSelfRef.tb__DOT__opcode_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (1U 
                                                & ((IData)(vlSelfRef.tb__DOT__opcode_i) 
                                                   & ((IData)(
                                                              (vlSelfRef.tb__DOT__op_a_i 
                                                               >> 0x0000003fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__op_b_i 
                                                                 >> 0x0000003fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       ((vlSelfRef.tb__DOT__op_b_i 
                                                         >> 0x0000003fU) 
                                                        & (IData)(vlSelfRef.tb__DOT__opcode_i)));
    if (((0xffffffffffffffffULL == vlSelfRef.tb__DOT__op_a_i) 
         & (IData)(__VdfgRegularize_h6e95ff9d_0_10))) {
        __VdfgRegularize_h6e95ff9d_0_0[0U] = (1U | 
                                              ((IData)(
                                                       (~ vlSelfRef.tb__DOT__op_a_i)) 
                                               << 1U));
        __VdfgRegularize_h6e95ff9d_0_0[1U] = (((IData)(
                                                       (~ vlSelfRef.tb__DOT__op_a_i)) 
                                               >> 0x0000001fU) 
                                              | ((IData)(
                                                         ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                          >> 0x00000020U)) 
                                                 << 1U));
        __VdfgRegularize_h6e95ff9d_0_0[2U] = ((IData)(
                                                      ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                       >> 0x00000020U)) 
                                              >> 0x0000001fU);
    } else if (__VdfgRegularize_h6e95ff9d_0_10) {
        __VdfgRegularize_h6e95ff9d_0_0[0U] = ((IData)(
                                                      (~ vlSelfRef.tb__DOT__op_a_i)) 
                                              << 1U);
        __VdfgRegularize_h6e95ff9d_0_0[1U] = (((IData)(
                                                       (~ vlSelfRef.tb__DOT__op_a_i)) 
                                               >> 0x0000001fU) 
                                              | ((IData)(
                                                         ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                          >> 0x00000020U)) 
                                                 << 1U));
        __VdfgRegularize_h6e95ff9d_0_0[2U] = ((IData)(
                                                      ((~ vlSelfRef.tb__DOT__op_a_i) 
                                                       >> 0x00000020U)) 
                                              >> 0x0000001fU);
    } else {
        __VdfgRegularize_h6e95ff9d_0_0[0U] = (IData)(vlSelfRef.tb__DOT__op_a_i);
        __VdfgRegularize_h6e95ff9d_0_0[1U] = (IData)(
                                                     (vlSelfRef.tb__DOT__op_a_i 
                                                      >> 0x00000020U));
        __VdfgRegularize_h6e95ff9d_0_0[2U] = 0U;
    }
    tb__DOT__i_dut__DOT__lzc_b_input = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                         ? (~ vlSelfRef.tb__DOT__op_b_i)
                                         : vlSelfRef.tb__DOT__op_b_i);
    __VdfgRegularize_h6e95ff9d_0_24 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               >> 5U)) 
                                        | (1U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 7U))) 
                                       | ((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 3U)) 
                                          | (1U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                   >> 5U))));
    __VdfgRegularize_h6e95ff9d_0_23 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               << 0x00000012U) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 0x0000000eU)) 
                                             | ((2U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                      >> 0x0000000dU)))));
    __VdfgRegularize_h6e95ff9d_0_5 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                              << 0x0000000cU) 
                                             | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                >> 0x00000014U)) 
                                            | ((2U 
                                                & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                   >> 0x00000015U)) 
                                               | (1U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                     >> 0x00000017U)))));
    __VdfgRegularize_h6e95ff9d_0_29 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               << 0x0000001aU) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 6U)) 
                                             | ((2U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                      >> 5U)))));
    __VdfgRegularize_h6e95ff9d_0_30 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               >> 0x0000001dU)) 
                                        | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                           >> 0x0000001fU)) 
                                       | ((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 0x0000001bU)) 
                                          | (1U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                   >> 0x0000001dU))));
    __VdfgRegularize_h6e95ff9d_0_6 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                              << 0x00000014U) 
                                             | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                >> 0x0000000cU)) 
                                            | ((2U 
                                                & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                     >> 0x0000000fU)))));
    __VdfgRegularize_h6e95ff9d_0_36 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               >> 0x00000015U)) 
                                        | (1U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x00000017U))) 
                                       | ((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x00000013U)) 
                                          | (1U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                   >> 0x00000015U))));
    __VdfgRegularize_h6e95ff9d_0_35 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               << 2U) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x0000001eU)) 
                                             | ((2U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                      >> 0x0000001dU)))));
    __VdfgRegularize_h6e95ff9d_0_22 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 6U)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 7U)))) 
                                       | ((2U & ((IData)(
                                                         (tb__DOT__i_dut__DOT__lzc_b_input 
                                                          >> 4U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 5U)))));
    __VdfgRegularize_h6e95ff9d_0_21 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x0000000eU)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x0000000cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x0000000dU))))));
    __VdfgRegularize_h6e95ff9d_0_3 = (3U & ((IData)(
                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                     >> 0x00000014U)) 
                                            | ((2U 
                                                & ((IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000016U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x00000017U))))));
    __VdfgRegularize_h6e95ff9d_0_27 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x00000026U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x00000024U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x00000025U))))));
    __VdfgRegularize_h6e95ff9d_0_28 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 0x0000001eU)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000001fU)))) 
                                       | ((2U & ((IData)(
                                                         (tb__DOT__i_dut__DOT__lzc_b_input 
                                                          >> 0x0000001cU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x0000001dU)))));
    __VdfgRegularize_h6e95ff9d_0_4 = (3U & ((IData)(
                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                     >> 0x0000002cU)) 
                                            | ((2U 
                                                & ((IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x0000002eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x0000002fU))))));
    __VdfgRegularize_h6e95ff9d_0_34 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 0x00000036U)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x00000037U)))) 
                                       | ((2U & ((IData)(
                                                         (tb__DOT__i_dut__DOT__lzc_b_input 
                                                          >> 0x00000034U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x00000035U)))));
    __VdfgRegularize_h6e95ff9d_0_33 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x0000003eU)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb__DOT__i_dut__DOT__lzc_b_input 
                                                             >> 0x0000003cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x0000003dU))))));
    __VdfgRegularize_h6e95ff9d_0_15 = (3U & (((2U & 
                                               (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                >> 9U)) 
                                              | (1U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 0x0000000bU))) 
                                             | (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                  << 0x00000018U) 
                                                 | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 8U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_23))));
    __VdfgRegularize_h6e95ff9d_0_14 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               << 6U) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                 >> 0x0000001aU)) 
                                             | (((2U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                     >> 0x00000017U)) 
                                                 | (1U 
                                                    & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                       >> 0x00000019U))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_30))));
    __VdfgRegularize_h6e95ff9d_0_13 = (((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               >> 9U)) 
                                        | (1U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x0000000bU))) 
                                       | (((2U & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                  >> 7U)) 
                                           | (1U & 
                                              (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               >> 9U))) 
                                          | (IData)(__VdfgRegularize_h6e95ff9d_0_6)));
    __VdfgRegularize_h6e95ff9d_0_12 = (3U & (((2U & 
                                               (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                >> 0x00000019U)) 
                                              | (1U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 0x0000001bU))) 
                                             | (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                  << 8U) 
                                                 | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                    >> 0x00000018U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_35))));
    __VdfgRegularize_h6e95ff9d_0_20 = (3U & (((2U & 
                                               ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000000aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x0000000bU)))) 
                                             | ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 8U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_21))));
    __VdfgRegularize_h6e95ff9d_0_19 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x0000001aU)) 
                                             | (((2U 
                                                  & ((IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 0x00000018U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (tb__DOT__i_dut__DOT__lzc_b_input 
                                                               >> 0x00000019U)))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_28))));
    __VdfgRegularize_h6e95ff9d_0_18 = (((2U & ((IData)(
                                                       (tb__DOT__i_dut__DOT__lzc_b_input 
                                                        >> 0x0000002aU)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000002bU)))) 
                                       | (((2U & ((IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x00000028U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000029U)))) 
                                          | (IData)(__VdfgRegularize_h6e95ff9d_0_4)));
    __VdfgRegularize_h6e95ff9d_0_17 = (3U & (((2U & 
                                               ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x0000003aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x0000003bU)))) 
                                             | ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x00000038U)) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_33))));
    __VdfgRegularize_h6e95ff9d_0_26 = ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                       | (((2U & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                  >> 0x00000011U)) 
                                           | (1U & 
                                              (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                               >> 0x00000013U))) 
                                          | (((2U & 
                                               (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                >> 0x0000000fU)) 
                                              | (1U 
                                                 & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                    >> 0x00000011U))) 
                                             | (IData)(__VdfgRegularize_h6e95ff9d_0_14))));
    __VdfgRegularize_h6e95ff9d_0_11 = (3U & (((__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                               << 0x0000000eU) 
                                              | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                 >> 0x00000012U)) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                | (((2U 
                                                     & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                        >> 0x0000000fU)) 
                                                    | (1U 
                                                       & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                          >> 0x00000011U))) 
                                                   | (IData)(__VdfgRegularize_h6e95ff9d_0_12)))));
    __VdfgRegularize_h6e95ff9d_0_25 = ((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                                       | (((2U & ((IData)(
                                                          (tb__DOT__i_dut__DOT__lzc_b_input 
                                                           >> 0x00000012U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000013U)))) 
                                          | (((2U & 
                                               ((IData)(
                                                        (tb__DOT__i_dut__DOT__lzc_b_input 
                                                         >> 0x00000010U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (tb__DOT__i_dut__DOT__lzc_b_input 
                                                            >> 0x00000011U)))) 
                                             | (IData)(__VdfgRegularize_h6e95ff9d_0_19))));
    __VdfgRegularize_h6e95ff9d_0_16 = (3U & ((IData)(
                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                      >> 0x00000032U)) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
                                                | (((2U 
                                                     & ((IData)(
                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                 >> 0x00000030U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                  >> 0x00000031U)))) 
                                                   | (IData)(__VdfgRegularize_h6e95ff9d_0_17)))));
    __VdfgRegularize_h6e95ff9d_0_32 = (3U & ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_13) 
                                                | (((2U 
                                                     & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                          >> 3U))) 
                                                   | (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                      | (IData)(__VdfgRegularize_h6e95ff9d_0_11))))));
    __VdfgRegularize_h6e95ff9d_0_31 = (3U & ((IData)(__VdfgRegularize_h6e95ff9d_0_27) 
                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_18) 
                                                | (((2U 
                                                     & ((IData)(
                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                 >> 0x00000022U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                  >> 0x00000023U)))) 
                                                   | ((IData)(
                                                              (tb__DOT__i_dut__DOT__lzc_b_input 
                                                               >> 0x00000020U)) 
                                                      | (IData)(__VdfgRegularize_h6e95ff9d_0_16))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (tb__DOT__i_dut__DOT__lzc_b_input 
                                                              >> 2U)) 
                                                     | ((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
                                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
                                                           | ((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
                                                              | (((2U 
                                                                   & ((IData)(tb__DOT__i_dut__DOT__lzc_b_input) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(
                                                                               (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                                >> 1U)))) 
                                                                 | (IData)(__VdfgRegularize_h6e95ff9d_0_31))))))))
                                                 ? 
                                                ((0x0000003fU 
                                                  & ((0U 
                                                      != (IData)(__VdfgRegularize_h6e95ff9d_0_31))
                                                      ? 
                                                     ((0U 
                                                       != (IData)(__VdfgRegularize_h6e95ff9d_0_16))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_17))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_33))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003eU))))
                                                          ? 
                                                         (1U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(
                                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                                >> 0x0000003fU)))))))
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003dU)))
                                                           ? 2U
                                                           : 3U))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003aU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000003bU)))
                                                           ? 4U
                                                           : 5U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000039U)))
                                                           ? 6U
                                                           : 7U)))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_34))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x00000037U)))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000036U)))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x00000035U)))
                                                            ? 0x0aU
                                                            : 0x0bU)))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000032U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000033U)))
                                                           ? 0x0cU
                                                           : 0x0dU)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000031U)))
                                                           ? 0x0eU
                                                           : 0x0fU))))
                                                       : 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_18))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_4))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002eU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002fU)))
                                                           ? 0x10U
                                                           : 0x11U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002dU)))
                                                           ? 0x12U
                                                           : 0x13U))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x0000002bU)))
                                                          ? 0x14U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000002aU)))
                                                           ? 0x15U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x00000029U)))
                                                            ? 0x16U
                                                            : 0x17U))))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_27))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000026U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000027U)))
                                                           ? 0x18U
                                                           : 0x19U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000025U)))
                                                           ? 0x1aU
                                                           : 0x1bU))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000022U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000023U)))
                                                           ? 0x1cU
                                                           : 0x1dU)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000021U)))
                                                           ? 0x1eU
                                                           : 0x1fU)))))
                                                      : 
                                                     ((0U 
                                                       != (IData)(__VdfgRegularize_h6e95ff9d_0_25))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_19))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_28))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x0000001fU)))
                                                          ? 0x20U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000001eU)))
                                                           ? 0x21U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x0000001dU)))
                                                            ? 0x22U
                                                            : 0x23U)))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000001aU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000001bU)))
                                                           ? 0x24U
                                                           : 0x25U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000019U)))
                                                           ? 0x26U
                                                           : 0x27U)))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_3))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000016U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000017U)))
                                                           ? 0x28U
                                                           : 0x29U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000015U)))
                                                           ? 0x2aU
                                                           : 0x2bU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                     >> 0x00000013U)))
                                                          ? 0x2cU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x00000012U)))
                                                           ? 0x2dU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                       >> 0x00000011U)))
                                                            ? 0x2eU
                                                            : 0x2fU)))))
                                                       : 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_20))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_21))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000eU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000fU)))
                                                           ? 0x30U
                                                           : 0x31U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000dU)))
                                                           ? 0x32U
                                                           : 0x33U))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000aU))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 0x0000000bU)))
                                                           ? 0x34U
                                                           : 0x35U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 9U)))
                                                           ? 0x36U
                                                           : 0x37U)))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_22))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 6U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 7U)))
                                                           ? 0x38U
                                                           : 0x39U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 5U)))
                                                           ? 0x3aU
                                                           : 0x3bU))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 2U))))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                      >> 3U)))
                                                           ? 0x3cU
                                                           : 0x3dU)
                                                          : 
                                                         (0x3eU 
                                                          | (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(
                                                                                (tb__DOT__i_dut__DOT__lzc_b_input 
                                                                                >> 1U))))))))))))) 
                                                 - 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & (((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                         << 0x0000001eU) 
                                                        | (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                           >> 2U)) 
                                                       | ((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
                                                          | ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                                             | ((IData)(__VdfgRegularize_h6e95ff9d_0_26) 
                                                                | (((2U 
                                                                     & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                          >> 1U))) 
                                                                   | (IData)(__VdfgRegularize_h6e95ff9d_0_32))))))))
                                                   ? 
                                                  (0x0000003fU 
                                                   & ((0U 
                                                       != (IData)(__VdfgRegularize_h6e95ff9d_0_32))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_11))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_12))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_35))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                            >> 0x0000001eU))
                                                           ? 
                                                          (1U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                             >> 0x0000001fU))))))
                                                           : 
                                                          ((0x20000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 2U
                                                            : 3U))
                                                          : 
                                                         ((0x08000000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 4U
                                                           : 
                                                          ((0x04000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 5U
                                                            : 
                                                           ((0x02000000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 6U
                                                             : 7U))))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_36))
                                                          ? 
                                                         ((0x00800000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 8U
                                                           : 
                                                          ((0x00400000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 9U
                                                            : 
                                                           ((0x00200000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x0aU
                                                             : 0x0bU)))
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                               >> 0x00000012U)))
                                                           ? 
                                                          ((0x00080000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x0cU
                                                            : 0x0dU)
                                                           : 
                                                          ((0x00020000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x0eU
                                                            : 0x0fU))))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_13))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_6))
                                                          ? 
                                                         ((0x00008000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 0x10U
                                                           : 
                                                          ((0x00004000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x11U
                                                            : 
                                                           ((0x00002000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x12U
                                                             : 0x13U)))
                                                          : 
                                                         ((0x00000800U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 0x14U
                                                           : 
                                                          ((0x00000400U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x15U
                                                            : 
                                                           ((0x00000200U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x16U
                                                             : 0x17U))))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_29))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                               >> 6U)))
                                                           ? 
                                                          ((0x00000080U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x18U
                                                            : 0x19U)
                                                           : 
                                                          ((0x00000020U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x1aU
                                                            : 0x1bU))
                                                          : 
                                                         ((8U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                           ? 0x1cU
                                                           : 
                                                          ((4U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                            ? 0x1dU
                                                            : 
                                                           ((2U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[1U])
                                                             ? 0x1eU
                                                             : 0x1fU))))))
                                                       : 
                                                      ((0U 
                                                        != (IData)(__VdfgRegularize_h6e95ff9d_0_26))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_14))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_30))
                                                          ? 
                                                         ((__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                           >> 0x0000001fU)
                                                           ? 0x20U
                                                           : 
                                                          ((0x40000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x21U
                                                            : 
                                                           ((0x20000000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x22U
                                                             : 0x23U)))
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 0x0000001aU)))
                                                           ? 
                                                          ((0x08000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x24U
                                                            : 0x25U)
                                                           : 
                                                          ((0x02000000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x26U
                                                            : 0x27U)))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_5))
                                                          ? 
                                                         ((0x00800000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                           ? 0x28U
                                                           : 
                                                          ((0x00400000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x29U
                                                            : 
                                                           ((0x00200000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x2aU
                                                             : 0x2bU)))
                                                          : 
                                                         ((0x00080000U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                           ? 0x2cU
                                                           : 
                                                          ((0x00040000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x2dU
                                                            : 
                                                           ((0x00020000U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x2eU
                                                             : 0x2fU)))))
                                                        : 
                                                       ((0U 
                                                         != (IData)(__VdfgRegularize_h6e95ff9d_0_15))
                                                         ? 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_23))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 0x0000000eU)))
                                                           ? 
                                                          ((0x00008000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x30U
                                                            : 0x31U)
                                                           : 
                                                          ((0x00002000U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x32U
                                                            : 0x33U))
                                                          : 
                                                         ((0x00000800U 
                                                           & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                           ? 0x34U
                                                           : 
                                                          ((0x00000400U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x35U
                                                            : 
                                                           ((0x00000200U 
                                                             & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                             ? 0x36U
                                                             : 0x37U))))
                                                         : 
                                                        ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_24))
                                                          ? 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 6U)))
                                                           ? 
                                                          ((0x00000080U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x38U
                                                            : 0x39U)
                                                           : 
                                                          ((0x00000020U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x3aU
                                                            : 0x3bU))
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                               >> 2U)))
                                                           ? 
                                                          ((8U 
                                                            & __VdfgRegularize_h6e95ff9d_0_0[0U])
                                                            ? 0x3cU
                                                            : 0x3dU)
                                                           : 
                                                          (0x3eU 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                             >> 1U))))))))))))
                                                   : 0x00000040U))
                                                 : 0x00000040U);
}

void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__in_rdy_o = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__stall_en_d = vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q;
    vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q;
    vlSelfRef.tb__DOT__out_vld_o = 0U;
    if ((0U != (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q) 
                 & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q)))) {
                vlSelfRef.tb__DOT__out_vld_o = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            vlSelfRef.tb__DOT__out_vld_o = 1U;
        }
    }
    vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__load_en = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q;
    vlSelfRef.tb__DOT__i_dut__DOT__state_d = vlSelfRef.tb__DOT__i_dut__DOT__state_q;
    if ((0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        vlSelfRef.tb__DOT__in_rdy_o = 1U;
        vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 0U;
        if (vlSelfRef.tb__DOT__in_vld_i) {
            vlSelfRef.tb__DOT__in_rdy_o = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__stall_en_d 
                = (0x4cU > (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lfsr_q));
            vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__load_en = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__state_d = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 1U;
        }
    } else {
        vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 0U;
        if ((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if ((0x40U != (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q))) {
                vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q)));
            }
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q)))) {
                    vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 1U;
                    vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en 
                        = vlSelfRef.tb__DOT__i_dut__DOT__ab_comp;
                }
            }
            if (vlSelfRef.tb__DOT__i_dut__DOT__algo_done_now) {
                vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 1U;
            }
            if (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_now) 
                 & ((~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q)) 
                    | (0x40U <= (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q))))) {
                vlSelfRef.tb__DOT__i_dut__DOT__state_d = 2U;
            }
            if (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q) 
                 & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__stall_en_q)))) {
                vlSelfRef.tb__DOT__i_dut__DOT__state_d = 2U;
                if (vlSelfRef.tb__DOT__out_rdy_i) {
                    vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if (vlSelfRef.tb__DOT__out_rdy_i) {
                vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
        }
    }
    if (vlSelfRef.tb__DOT__flush_i) {
        vlSelfRef.tb__DOT__in_rdy_o = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = 0U;
        vlSelfRef.tb__DOT__out_vld_o = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__load_en = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 0U;
    }
    vlSelfRef.tb__DOT__i_dut__DOT__add_tmp = (vlSelfRef.tb__DOT__i_dut__DOT__op_a_q 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)))))));
    vlSelfRef.tb__DOT__i_dut__DOT__add_mux = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                               ? vlSelfRef.tb__DOT__op_a_i
                                               : vlSelfRef.tb__DOT__i_dut__DOT__op_b_q);
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__tb__DOT__stim_start__v0) {
            vlSelfRef.__VdlySet__tb__DOT__stim_start__v0 = 0U;
            vlSelfRef.tb__DOT__stim_start = 1U;
        }
        if (vlSelfRef.__VdlySet__tb__DOT__stim_end__v0) {
            vlSelfRef.__VdlySet__tb__DOT__stim_end__v0 = 0U;
            vlSelfRef.tb__DOT__stim_end = 1U;
        }
        if (vlSelfRef.__VdlySet__tb__DOT__acq_trig__v0) {
            vlSelfRef.__VdlySet__tb__DOT__acq_trig__v0 = 0U;
            vlSelfRef.tb__DOT__acq_trig = 1U;
        }
        if (vlSelfRef.__VdlySet__tb__DOT__acq_trig__v1) {
            vlSelfRef.__VdlySet__tb__DOT__acq_trig__v1 = 0U;
            vlSelfRef.tb__DOT__acq_trig = 0U;
        }
        if (vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v0) {
            vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v0 = 0U;
            vlSelfRef.tb__DOT__end_of_sim = 1U;
        }
        if (vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v1) {
            vlSelfRef.__VdlySet__tb__DOT__end_of_sim__v1 = 0U;
            vlSelfRef.tb__DOT__end_of_sim = 1U;
        }
        if (vlSelfRef.__VdlySet__tb__DOT__rst_ni__v0) {
            vlSelfRef.__VdlySet__tb__DOT__rst_ni__v0 = 0U;
            vlSelfRef.tb__DOT__rst_ni = 1U;
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb___024root___timing_ready(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_ready\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h2004b266__0.ready("@(posedge tb.clk_i)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h2004b266__0.moveToResumeQueue(
                                                          "@(posedge tb.clk_i)");
    vlSelfRef.__VtrigSched_h2004b266__0.resume("@(posedge tb.clk_i)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers_vec__act(vlSelf);
    Vtb___024root___timing_ready(vlSelf);
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__inact(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__inact\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("hdl/tb.sv", 24, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("hdl/tb.sv", 24, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("hdl/tb.sv", 24, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("hdl/tb.sv", 24, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb___024root____VbeforeTrig_h2004b266__0(Vtb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____VbeforeTrig_h2004b266__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb__DOT__clk_i) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 
        = vlSelfRef.tb__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2004b266__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
