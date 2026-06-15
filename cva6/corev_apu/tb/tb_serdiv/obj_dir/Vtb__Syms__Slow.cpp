// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb__pch.h"

Vtb__Syms::Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(897);
    // Setup sub module instances
    TOP__tb_pkg.ctor(this, "tb_pkg");
    TOP__tb_pkg__03a__03aprogress__Vclpkg.ctor(this, "tb_pkg::progress__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_pkg = &TOP__tb_pkg;
    TOP.tb_pkg__03a__03aprogress__Vclpkg = &TOP__tb_pkg__03a__03aprogress__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_pkg.__Vconfigure(true);
    TOP__tb_pkg__03a__03aprogress__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vtb__Syms::~Vtb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__tb_pkg__03a__03aprogress__Vclpkg.dtor();
    TOP__tb_pkg.dtor();
}
