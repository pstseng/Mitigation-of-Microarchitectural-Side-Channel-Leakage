// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_TB_PKG__03A__03APROGRESS__VCLPKG_H_
#define VERILATED_VTB_TB_PKG__03A__03APROGRESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tb_pkg__03a__03aprogress__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_tb_pkg__03a__03aprogress__Vclpkg();
    ~Vtb_tb_pkg__03a__03aprogress__Vclpkg();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_tb_pkg__03a__03aprogress__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb_tb_pkg__03a__03aprogress : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ __PVT__numResp;
    QData/*63:0*/ __PVT__acqCnt;
    QData/*63:0*/ __PVT__errCnt;
    QData/*63:0*/ __PVT__totAcqCnt;
    QData/*63:0*/ __PVT__totErrCnt;
    double __PVT__newState;
    double __PVT__oldState;
    std::string __PVT__name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_pkg::progress"; }
    VlClass* clone() const { return new Vtb_tb_pkg__03a__03aprogress(*this); }
    void __VnoInFunc_addRes(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ isError);
    void __VnoInFunc_print(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_printToFile(Vtb__Syms* __restrict vlSymsp, std::string file, CData/*0:0*/ summary);
    void __VnoInFunc_reset(Vtb__Syms* __restrict vlSymsp, QData/*63:0*/ numResp_);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb_tb_pkg__03a__03aprogress() = default;
    void init(Vtb__Syms* __restrict vlSymsp, std::string name);
    ~Vtb_tb_pkg__03a__03aprogress() {}
};


#endif  // guard
