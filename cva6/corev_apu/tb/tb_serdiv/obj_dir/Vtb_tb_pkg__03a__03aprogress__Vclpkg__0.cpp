// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tb_pkg__03a__03aprogress::init(Vtb__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_tb_pkg__03a__03aprogress::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__name = name;
    this->__PVT__acqCnt = 0ULL;
    this->__PVT__errCnt = 0ULL;
    this->__PVT__newState = 0.0;
    this->__PVT__oldState = 0.0;
    this->__PVT__numResp = 1ULL;
    this->__PVT__totAcqCnt = 0ULL;
    this->__PVT__totErrCnt = 0ULL;
}

void Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_reset(Vtb__Syms* __restrict vlSymsp, QData/*63:0*/ numResp_) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__acqCnt = 0ULL;
    this->__PVT__errCnt = 0ULL;
    this->__PVT__newState = 0.0;
    this->__PVT__oldState = 0.0;
    this->__PVT__numResp = numResp_;
}

void Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_addRes(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ isError) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_addRes\n"); );
    // Body
    this->__PVT__acqCnt = (1ULL + this->__PVT__acqCnt);
    this->__PVT__totAcqCnt = (1ULL + this->__PVT__totAcqCnt);
    this->__PVT__errCnt = (this->__PVT__errCnt + VL_EXTENDS_QI(64,32, isError));
    this->__PVT__totErrCnt = (this->__PVT__totErrCnt 
                              + VL_EXTENDS_QI(64,32, isError));
    if (VL_UNLIKELY((VL_LTES_IQQ(64, 1ULL, this->__PVT__errCnt)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_pkg.sv:84: Assertion failed in %m: %s> simulation stopped (ERROR_CNT_STOP_LEVEL =           1 reached).\n",4, 'M',vlSymsp->name(),"tb_pkg.progress.addRes", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(this->__PVT__name));
        VL_STOP_MT("hdl/tb_pkg.sv", 84, "");
        VL_STOP_MT("hdl/tb_pkg.sv", 85, "");
    }
}

void Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_print(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_print\n"); );
    // Body
    this->__PVT__newState = (VL_ISTOR_D_Q(64, this->__PVT__acqCnt) 
                             / VL_ISTOR_D_Q(64, this->__PVT__numResp));
    if (VL_UNLIKELY((((this->__PVT__newState - this->__PVT__oldState) 
                      >= 1.00000000000000002e-02)))) {
        VL_WRITEF_NX("%s> validated %03d%% -- %01d failed (%03.3f%%) \n",4
                     , 'S',&(this->__PVT__name), '~',32,
                     VL_RTOI_I_D((100.0 * this->__PVT__newState))
                     , '~',64,this->__PVT__errCnt, 'D',
                     (100.0 * (VL_ISTOR_D_Q(64, this->__PVT__errCnt) 
                               / VL_ISTOR_D_Q(64, this->__PVT__acqCnt))));
        this->__PVT__oldState = this->__PVT__newState;
    }
}

void Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_printToFile(Vtb__Syms* __restrict vlSymsp, std::string file, CData/*0:0*/ summary) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_tb_pkg__03a__03aprogress::__VnoInFunc_printToFile\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__fptr;
    unnamedblk1__DOT__fptr = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__fptr, VL_SHIFTL_III(32,32,32, 
                                                                VL_LEN_IN(file), 3U))) {
        if ((((0x20U == VL_GETC_N(file,unnamedblk1__DOT__fptr)) 
              | (0x2fU == VL_GETC_N(file,unnamedblk1__DOT__fptr))) 
             | (0x5cU == VL_GETC_N(file,unnamedblk1__DOT__fptr)))) {
            file = VL_PUTC_N(file, unnamedblk1__DOT__fptr, 0x5fU);
        }
        unnamedblk1__DOT__fptr = ((IData)(1U) + unnamedblk1__DOT__fptr);
    }
    unnamedblk1__DOT__fptr = VL_FOPEN_NN(file, "w"s);
    ;
    if (summary) {
        VL_FWRITEF_NX(unnamedblk1__DOT__fptr,"Simulation Summary of %s\ntotal: %01d of %01d vectors failed (%03.3f%%) \n",4
                      , 'S',&(this->__PVT__name), '~',64,this->__PVT__totErrCnt
                      , '~',64,this->__PVT__totAcqCnt
                      , 'D',(VL_ISTOR_D_Q(64, this->__PVT__totErrCnt) 
                             / (1.00000000000000006e-09 
                                + (100.0 * VL_ISTOR_D_Q(64, this->__PVT__totAcqCnt)))));
        if ((0ULL == this->__PVT__totErrCnt)) {
            VL_FWRITEF_NX(unnamedblk1__DOT__fptr,"CI: PASSED\n",0);
        } else {
            VL_FWRITEF_NX(unnamedblk1__DOT__fptr,"CI: FAILED\n",0);
        }
    } else {
        VL_FWRITEF_NX(unnamedblk1__DOT__fptr,"test name: %s\nthis test: %01d of %01d vectors failed (%03.3f%%) \ntotal so far: %01d of %01d vectors failed (%03.3f%%) \n",7
                      , 'S',&(file), '~',64,this->__PVT__errCnt
                      , '~',64,this->__PVT__acqCnt, 'D',
                      (100.0 * (VL_ISTOR_D_Q(64, this->__PVT__errCnt) 
                                / VL_ISTOR_D_Q(64, this->__PVT__acqCnt)))
                      , '~',64,this->__PVT__totErrCnt
                      , '~',64,this->__PVT__totAcqCnt
                      , 'D',(100.0 * (VL_ISTOR_D_Q(64, this->__PVT__totErrCnt) 
                                      / VL_ISTOR_D_Q(64, this->__PVT__totAcqCnt))));
    }
    VL_FCLOSE_I(unnamedblk1__DOT__fptr); }

void Vtb_tb_pkg__03a__03aprogress::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_tb_pkg__03a__03aprogress::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__newState = 0;
    __PVT__oldState = 0;
    __PVT__numResp = 0;
    __PVT__acqCnt = 0;
    __PVT__errCnt = 0;
    __PVT__totAcqCnt = 0;
    __PVT__totErrCnt = 0;
}
