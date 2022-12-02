// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTile__Syms.h"
#include "VTile.h"
#include "VTile___024root.h"

// FUNCTIONS
VTile__Syms::~VTile__Syms()
{
    _vm_pgoProfiler.write("VTile", _vm_contextp__->profVltFilename());
}

VTile__Syms::VTile__Syms(VerilatedContext* contextp, const char* namep, VTile* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_threadPoolp{static_cast<VlThreadPool*>(contextp->threadPoolp())}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure profiling for PGO
    _vm_pgoProfiler.addCounter(0, "h96673e89__0");
    _vm_pgoProfiler.addCounter(1, "h797017e2__0");
    _vm_pgoProfiler.addCounter(2, "hf113a424__0");
    _vm_pgoProfiler.addCounter(3, "haed92fa6__0");
    _vm_pgoProfiler.addCounter(4, "h25d86c25__0");
    _vm_pgoProfiler.addCounter(5, "h847ace2b__0");
    _vm_pgoProfiler.addCounter(6, "h7aa63d10__0");
    _vm_pgoProfiler.addCounter(7, "h004c6f60__0");
    _vm_pgoProfiler.addCounter(8, "h62892aa8__0");
    _vm_pgoProfiler.addCounter(9, "h4f9a841a__0");
    _vm_pgoProfiler.addCounter(10, "hce604d46__0");
    _vm_pgoProfiler.addCounter(11, "hb575d432__0");
    _vm_pgoProfiler.addCounter(12, "h854cbaef__0");
    _vm_pgoProfiler.addCounter(13, "h2782d7eb__0");
    _vm_pgoProfiler.addCounter(14, "h6ee38e6f__0");
    _vm_pgoProfiler.addCounter(15, "h25334936__0");
    _vm_pgoProfiler.addCounter(16, "h2ea3365d__0");
    _vm_pgoProfiler.addCounter(17, "h0997be10__0");
    _vm_pgoProfiler.addCounter(18, "h890fb1ce__0");
    _vm_pgoProfiler.addCounter(19, "hbc1b0a9a__0");
    _vm_pgoProfiler.addCounter(20, "hbb75c820__0");
    _vm_pgoProfiler.addCounter(21, "h89921a84__0");
    _vm_pgoProfiler.addCounter(22, "h505e967f__0");
    _vm_pgoProfiler.addCounter(23, "h08af2dc1__0");
    _vm_pgoProfiler.addCounter(24, "h620fa82c__0");
    _vm_pgoProfiler.addCounter(25, "h6309ed4f__0");
    _vm_pgoProfiler.addCounter(26, "h3d807ace__0");
    _vm_pgoProfiler.addCounter(27, "h1ea70a28__0");
    _vm_pgoProfiler.addCounter(28, "hd3c16db6__0");
    _vm_pgoProfiler.addCounter(29, "h9afa7ec3__0");
    _vm_pgoProfiler.addCounter(30, "he09c0206__0");
    _vm_pgoProfiler.addCounter(31, "h08ba730c__0");
    _vm_pgoProfiler.addCounter(32, "hbae0e332__0");
    _vm_pgoProfiler.addCounter(33, "habfe12c2__0");
    _vm_pgoProfiler.addCounter(34, "h91505357__0");
    _vm_pgoProfiler.addCounter(35, "h13824ba2__0");
    _vm_pgoProfiler.addCounter(36, "h26da8011__0");
    _vm_pgoProfiler.addCounter(37, "hd0c54c7c__0");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
