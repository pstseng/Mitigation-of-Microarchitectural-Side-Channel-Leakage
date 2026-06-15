// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_tb_pkg;
class Vtb_tb_pkg__03a__03aprogress;
class Vtb_tb_pkg__03a__03aprogress__Vclpkg;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final {
  public:
    // CELLS
    Vtb_tb_pkg* __PVT__tb_pkg;
    Vtb_tb_pkg__03a__03aprogress__Vclpkg* tb_pkg__03a__03aprogress__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__flush_i;
        CData/*1:0*/ tb__DOT__opcode_i;
        CData/*0:0*/ tb__DOT__in_rdy_o;
        CData/*0:0*/ tb__DOT__in_vld_i;
        CData/*0:0*/ tb__DOT__out_rdy_i;
        CData/*0:0*/ tb__DOT__out_vld_o;
        CData/*0:0*/ tb__DOT__clk_i;
        CData/*0:0*/ tb__DOT__rst_ni;
        CData/*0:0*/ tb__DOT__stim_start;
        CData/*0:0*/ tb__DOT__stim_end;
        CData/*0:0*/ tb__DOT__end_of_sim;
        CData/*0:0*/ tb__DOT__acq_trig;
        CData/*0:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__bit_i;
        CData/*0:0*/ tb__DOT__p_acq__DOT__ok;
        CData/*1:0*/ tb__DOT__i_dut__DOT__state_d;
        CData/*1:0*/ tb__DOT__i_dut__DOT__state_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__op_b_zero_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__rem_sel_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__comp_inv_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__res_inv_q;
        CData/*6:0*/ tb__DOT__i_dut__DOT__cnt_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__a_reg_en;
        CData/*0:0*/ tb__DOT__i_dut__DOT__b_reg_en;
        CData/*0:0*/ tb__DOT__i_dut__DOT__res_reg_en;
        CData/*0:0*/ tb__DOT__i_dut__DOT__ab_comp;
        CData/*0:0*/ tb__DOT__i_dut__DOT__load_en;
        CData/*0:0*/ tb__DOT__i_dut__DOT__div_res_zero_q;
        CData/*6:0*/ tb__DOT__i_dut__DOT__lat_cnt_q;
        CData/*6:0*/ tb__DOT__i_dut__DOT__lat_cnt_d;
        CData/*0:0*/ tb__DOT__i_dut__DOT__algo_done_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__algo_done_d;
        CData/*0:0*/ tb__DOT__i_dut__DOT__algo_done_now;
        CData/*6:0*/ tb__DOT__i_dut__DOT__lfsr_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__stall_en_q;
        CData/*0:0*/ tb__DOT__i_dut__DOT__stall_en_d;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
        CData/*0:0*/ __VdlySet__tb__DOT__rst_ni__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__stim_start__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__acq_trig__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__acq_trig__v1;
        CData/*0:0*/ __VdlySet__tb__DOT__stim_end__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__end_of_sim__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__end_of_sim__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst_ni__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb__DOT____VlemExpr_0;
        VlWide<3>/*64:0*/ tb__DOT__op_a;
        VlWide<3>/*64:0*/ tb__DOT__op_b;
        VlWide<3>/*64:0*/ tb__DOT__op_a_tmp;
        VlWide<3>/*64:0*/ tb__DOT__op_b_tmp;
        IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__latency;
        IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__total_success_cnt;
        IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__NUM_SECRETS;
        IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__TRIALS_PER_BIT;
        IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t;
        IData/*31:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__random_delay;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*63:0*/ tb__DOT__op_a_i;
        QData/*63:0*/ tb__DOT__op_b_i;
        QData/*63:0*/ tb__DOT__num_stim;
        QData/*63:0*/ tb__DOT__cyc;
        QData/*63:0*/ tb__DOT__p_stim__DOT__k;
        QData/*63:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__target_secret;
        QData/*63:0*/ tb__DOT__p_stim__DOT__attack_scope__DOT__guessed_secret;
        QData/*63:0*/ tb__DOT__p_acq__DOT__acqCnt;
        QData/*63:0*/ tb__DOT__p_acq__DOT__res;
        QData/*63:0*/ tb__DOT__p_acq__DOT__act;
        QData/*63:0*/ tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__start_cyc;
        QData/*63:0*/ tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__end_cyc;
        QData/*63:0*/ tb__DOT__p_acq__DOT__unnamedblk1_13__DOT__unnamedblk5__DOT__lat;
        QData/*63:0*/ tb__DOT__i_dut__DOT__res_q;
        QData/*63:0*/ tb__DOT__i_dut__DOT__op_a_q;
        QData/*63:0*/ tb__DOT__i_dut__DOT__op_b_q;
        QData/*63:0*/ tb__DOT__i_dut__DOT__add_mux;
        QData/*63:0*/ tb__DOT__i_dut__DOT__add_tmp;
        QData/*63:0*/ tb__DOT__i_dut__DOT__out_mux;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string tb__DOT__test_name;
    std::string tb__DOT__p_acq__DOT__opStr;
    std::string tb__DOT__p_acq__DOT__failingTests;
    std::string tb__DOT__p_acq__DOT__tmpstr;
    double tb__DOT__p_acq__DOT__unnamedblk6__DOT__lat_avg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2004b266__0;
    VlClassRef<Vtb_tb_pkg__03a__03aprogress> tb__DOT__p_acq__DOT__status;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* namep);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
