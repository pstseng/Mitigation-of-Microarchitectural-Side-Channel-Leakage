// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb___024root___timing_ready(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__p_stim__DOT__k = 0ULL;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__target_secret = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2690306265558551283ull);
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14269444415943518630ull);
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__bit_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534999326436547493ull);
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency = 0U;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__total_success_cnt = 0U;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__NUM_SECRETS = 0x0000012cU;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__TRIALS_PER_BIT = 0x0000000aU;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__random_delay 
        = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
    vlSelfRef.tb__DOT__p_acq__DOT__ok = 0U;
    vlSelfRef.tb__DOT__p_acq__DOT__opStr = ""s;
    vlSelfRef.tb__DOT__p_acq__DOT__failingTests = ""s;
    vlSelfRef.tb__DOT__p_acq__DOT__tmpstr = ""s;
    vlSelfRef.tb__DOT__p_acq__DOT__acqCnt = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__res = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__act = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__start_cyc = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__end_cyc = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk6__DOT__lat_avg = 0.0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 
        = vlSelfRef.tb__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0 
        = vlSelfRef.tb__DOT__rst_ni;
    Vtb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__p_stim__DOT__k = 0ULL;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__target_secret = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2690306265558551283ull);
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14269444415943518630ull);
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__bit_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534999326436547493ull);
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__latency = 0U;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__total_success_cnt = 0U;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__NUM_SECRETS = 0x0000012cU;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__TRIALS_PER_BIT = 0x0000000aU;
    vlSelfRef.tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__random_delay 
        = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
    vlSelfRef.tb__DOT__p_acq__DOT__ok = 0U;
    vlSelfRef.tb__DOT__p_acq__DOT__opStr = ""s;
    vlSelfRef.tb__DOT__p_acq__DOT__failingTests = ""s;
    vlSelfRef.tb__DOT__p_acq__DOT__tmpstr = ""s;
    vlSelfRef.tb__DOT__p_acq__DOT__acqCnt = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__res = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__act = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__start_cyc = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__end_cyc = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat = 0ULL;
    vlSelfRef.tb__DOT__p_acq__DOT__unnamedblk6__DOT__lat_avg = 0.0;
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("hdl/tb.sv", 24, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb___024root___eval_triggers_vec__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers_vec__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.tb__DOT__in_rdy_o = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__res_reg_en = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__out_mux = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__rem_sel_q)
                                               ? vlSelfRef.tb__DOT__i_dut__DOT__op_a_q
                                               : vlSelfRef.tb__DOT__i_dut__DOT__res_q);
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
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q)))) {
                    vlSelfRef.tb__DOT__i_dut__DOT__res_reg_en = 1U;
                }
            }
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
    vlSelfRef.tb__DOT__i_dut__DOT__ab_comp = (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__op_b_zero_q) 
                                               | (0U 
                                                  != vlSelfRef.tb__DOT__i_dut__DOT__op_a_q)) 
                                              & (((IData)(vlSelfRef.tb__DOT__i_dut__DOT__comp_inv_q) 
                                                  ^ 
                                                  (vlSelfRef.tb__DOT__i_dut__DOT__op_a_q 
                                                   > vlSelfRef.tb__DOT__i_dut__DOT__op_b_q)) 
                                                 | (vlSelfRef.tb__DOT__i_dut__DOT__op_b_q 
                                                    == vlSelfRef.tb__DOT__i_dut__DOT__op_a_q)));
    vlSelfRef.tb__DOT__i_dut__DOT__algo_done_now = 
        ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q) 
         | (0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__cnt_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       ((vlSelfRef.tb__DOT__op_b_i 
                                                         >> 0x0000003fU) 
                                                        & (IData)(vlSelfRef.tb__DOT__opcode_i)));
    __VdfgRegularize_h6e95ff9d_0_10 = (IData)(((vlSelfRef.tb__DOT__op_a_i 
                                                >> 0x0000003fU) 
                                               & (IData)(vlSelfRef.tb__DOT__opcode_i)));
    if ((0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        vlSelfRef.tb__DOT__in_rdy_o = 1U;
        if (vlSelfRef.tb__DOT__in_vld_i) {
            vlSelfRef.tb__DOT__in_rdy_o = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__stall_en_d 
                = (0x4cU > (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lfsr_q));
            vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__load_en = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        if ((0x40U != (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q))) {
            vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_q)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q)))) {
                vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 1U;
            }
        }
    }
    if (vlSelfRef.tb__DOT__flush_i) {
        vlSelfRef.tb__DOT__in_rdy_o = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__lat_cnt_d = 0U;
        vlSelfRef.tb__DOT__out_vld_o = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__b_reg_en = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__load_en = 0U;
    }
    vlSelfRef.tb__DOT__i_dut__DOT__add_tmp = (vlSelfRef.tb__DOT__i_dut__DOT__op_a_q 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)))))));
    vlSelfRef.tb__DOT__i_dut__DOT__add_mux = ((IData)(vlSelfRef.tb__DOT__i_dut__DOT__load_en)
                                               ? vlSelfRef.tb__DOT__op_a_i
                                               : vlSelfRef.tb__DOT__i_dut__DOT__op_b_q);
    vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 0U;
    vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q;
    if ((0U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
        vlSelfRef.tb__DOT__i_dut__DOT__state_d = vlSelfRef.tb__DOT__i_dut__DOT__state_q;
        if (vlSelfRef.tb__DOT__in_vld_i) {
            vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 1U;
            vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 0U;
            vlSelfRef.tb__DOT__i_dut__DOT__state_d = 1U;
        }
    } else {
        vlSelfRef.tb__DOT__i_dut__DOT__state_d = vlSelfRef.tb__DOT__i_dut__DOT__state_q;
        if ((1U == (IData)(vlSelfRef.tb__DOT__i_dut__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__algo_done_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_dut__DOT__div_res_zero_q)))) {
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
        vlSelfRef.tb__DOT__i_dut__DOT__a_reg_en = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__algo_done_d = 0U;
        vlSelfRef.tb__DOT__i_dut__DOT__state_d = 0U;
    }
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

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->tb__DOT__op_a, __VscopeHash, 16292097919535436233ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->tb__DOT__op_b, __VscopeHash, 11826969458322355066ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->tb__DOT__op_a_tmp, __VscopeHash, 267337430172855740ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->tb__DOT__op_b_tmp, __VscopeHash, 14921992806321118402ull);
    vlSelf->tb__DOT__flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14345303497772263829ull);
    vlSelf->tb__DOT__op_a_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14475792110547783602ull);
    vlSelf->tb__DOT__op_b_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14947258284249995397ull);
    vlSelf->tb__DOT__opcode_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3168439418411311715ull);
    vlSelf->tb__DOT__in_rdy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15126286179720098409ull);
    vlSelf->tb__DOT__in_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11959424647988054441ull);
    vlSelf->tb__DOT__out_rdy_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1845976299076154353ull);
    vlSelf->tb__DOT__out_vld_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17326380265633313457ull);
    vlSelf->tb__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4592560434213774491ull);
    vlSelf->tb__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 317698366821969601ull);
    vlSelf->tb__DOT__stim_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16755279676230853316ull);
    vlSelf->tb__DOT__stim_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2983670909054225571ull);
    vlSelf->tb__DOT__end_of_sim = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17579899289381239737ull);
    vlSelf->tb__DOT__num_stim = 0;
    vlSelf->tb__DOT__acq_trig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15731427746249157803ull);
    vlSelf->tb__DOT__cyc = 0;
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t = 0;
    vlSelf->tb__DOT__i_dut__DOT__state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1076727251602731720ull);
    vlSelf->tb__DOT__i_dut__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14235542679219909418ull);
    vlSelf->tb__DOT__i_dut__DOT__res_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1208763211883277137ull);
    vlSelf->tb__DOT__i_dut__DOT__op_a_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7507662782253372166ull);
    vlSelf->tb__DOT__i_dut__DOT__op_b_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15239610060196404901ull);
    vlSelf->tb__DOT__i_dut__DOT__op_b_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1139119208001144992ull);
    vlSelf->tb__DOT__i_dut__DOT__rem_sel_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12543477997338981802ull);
    vlSelf->tb__DOT__i_dut__DOT__comp_inv_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16909602715446423607ull);
    vlSelf->tb__DOT__i_dut__DOT__res_inv_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6011927804677882787ull);
    vlSelf->tb__DOT__i_dut__DOT__add_mux = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1094802033251295109ull);
    vlSelf->tb__DOT__i_dut__DOT__add_tmp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16351182353568814007ull);
    vlSelf->tb__DOT__i_dut__DOT__out_mux = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15320410735961632130ull);
    vlSelf->tb__DOT__i_dut__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3547783228455892267ull);
    vlSelf->tb__DOT__i_dut__DOT__a_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15803117349505841680ull);
    vlSelf->tb__DOT__i_dut__DOT__b_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6053944358893418801ull);
    vlSelf->tb__DOT__i_dut__DOT__res_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3854353335919615162ull);
    vlSelf->tb__DOT__i_dut__DOT__ab_comp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15823973616342890630ull);
    vlSelf->tb__DOT__i_dut__DOT__load_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3385341850621332462ull);
    vlSelf->tb__DOT__i_dut__DOT__div_res_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12272917702049737098ull);
    vlSelf->tb__DOT__i_dut__DOT__lat_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17232486097388165013ull);
    vlSelf->tb__DOT__i_dut__DOT__lat_cnt_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7321168383922362701ull);
    vlSelf->tb__DOT__i_dut__DOT__algo_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3866195076655048239ull);
    vlSelf->tb__DOT__i_dut__DOT__algo_done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2875018322931593022ull);
    vlSelf->tb__DOT__i_dut__DOT__algo_done_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10129480221091043222ull);
    vlSelf->tb__DOT__i_dut__DOT__lfsr_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10193690267651381705ull);
    vlSelf->tb__DOT__i_dut__DOT__stall_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17892754393840474984ull);
    vlSelf->tb__DOT__i_dut__DOT__stall_en_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15803553930514082494ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdlySet__tb__DOT__rst_ni__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__stim_start__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__acq_trig__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__acq_trig__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__stim_end__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__end_of_sim__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__end_of_sim__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
