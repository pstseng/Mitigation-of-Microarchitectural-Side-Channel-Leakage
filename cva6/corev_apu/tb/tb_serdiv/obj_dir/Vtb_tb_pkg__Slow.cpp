// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"


Vtb_tb_pkg::Vtb_tb_pkg() = default;
Vtb_tb_pkg::~Vtb_tb_pkg() = default;

void Vtb_tb_pkg::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_tb_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_tb_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
