// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"


Vtb_tb_pkg__03a__03aprogress__Vclpkg::Vtb_tb_pkg__03a__03aprogress__Vclpkg() = default;
Vtb_tb_pkg__03a__03aprogress__Vclpkg::~Vtb_tb_pkg__03a__03aprogress__Vclpkg() = default;

void Vtb_tb_pkg__03a__03aprogress__Vclpkg::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_tb_pkg__03a__03aprogress__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_tb_pkg__03a__03aprogress__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
