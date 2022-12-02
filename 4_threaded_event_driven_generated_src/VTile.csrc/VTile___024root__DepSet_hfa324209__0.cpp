// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTile.h for the primary calling header

#include "verilated.h"

#include "VTile___024root.h"

VL_INLINE_OPT void VTile___024root___sequent__TOP__1(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE;
    // Body
    __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE 
        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE;
    if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
        if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
            if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)))) {
                if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166;
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165;
                }
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
        __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE 
            = ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)) 
               & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)
                   ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1)
                   : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_179)));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1 
            = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)
                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE)
                : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_200));
    }
    if (((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__illegal = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                      & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__illegal 
            = ((0x37U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
               & ((0x17U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                  & ((0x6fU != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                     & ((0x67U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                        & ((0x63U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                           & ((0x1063U != (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                              & ((0x4063U != (0x707fU 
                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                 & ((0x5063U != (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                    & ((0x6063U != 
                                        (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                       & ((0x7063U 
                                           != (0x707fU 
                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                          & ((3U != 
                                              (0x707fU 
                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                             & ((0x1003U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                & ((0x2003U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                   & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_709))))))))))))));
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE 
        = __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE;
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__2(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_ = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret = 0U;
    } else if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_ 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___time_T_1;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3;
    } else if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_ 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___time_T_1;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3;
    } else if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_ 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___time_T_1;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3;
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_ 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184;
        if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
            if ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                            >> 0x14U))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3;
            } else if ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3;
            } else {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh 
                    = ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                        : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121);
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_135;
            }
        } else {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3;
        }
    }
    if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
        if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause 
                = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__iaddrInvalid)
                    ? 0U : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__laddrInvalid)
                             ? 4U : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__saddrInvalid)
                                      ? 6U : (0xfU 
                                              & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall)
                                                  ? 
                                                 ((IData)(8U) 
                                                  + (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV))
                                                  : 
                                                 ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak)
                                                   ? 3U
                                                   : 2U))))));
        } else if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)))) {
            if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168;
            }
        }
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__3(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdlyvset__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0 = 0U;
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
            if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
                if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)))) {
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180;
                }
            }
        }
        if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
        } else if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
        } else if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
        } else if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
            if ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                            >> 0x14U))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
            } else if ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
            } else if ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
            } else if ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
            } else {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                    = ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                        : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_96);
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_97;
            }
        } else {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1;
        }
    }
    if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
        if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt) {
            if ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__iaddrInvalid) 
                  | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__laddrInvalid)) 
                 | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__saddrInvalid))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu;
            }
        } else if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)))) {
            if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169;
            }
        }
    }
    if (((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en) 
           & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall))) 
          & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))) 
         & (0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                            >> 7U))))) {
        vlSelf->__Vdlyvval__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0 
            = (IData)(((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))
                        ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_out))
                        : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))
                            ? (QData)((IData)(((IData)(4U) 
                                               + vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc)))
                            : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))
                                ? ((5U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type))
                                    ? (QData)((IData)(
                                                      (0xffU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift)))
                                    : ((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift)))
                                        : ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type))
                                            ? (((QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift 
                                                                                >> 7U))))))) 
                                                << 8U) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift))))
                                            : ((2U 
                                                == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift 
                                                                                >> 0xfU))))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift))))
                                                : (QData)((IData)(vlSelf->Tile__DOT__dcache_io_cpu_resp_bits_data))))))
                                : (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu))))));
        vlSelf->__Vdlyvset__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0 
            = (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                        >> 7U));
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__4(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__4\n"); );
    // Init
    CData/*1:0*/ __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1;
    // Body
    __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1 
        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1;
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost = 0U;
        __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1 = 3U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc = 0x1fcULL;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV = 3U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
            if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
                if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)))) {
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181;
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191;
                }
            }
            if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt) {
                __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc 
                    = (QData)((IData)(((IData)(0x100U) 
                                       + ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV) 
                                          << 6U))));
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV = 3U;
            } else {
                if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret) {
                    __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1 = 0U;
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1;
                } else {
                    __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_176;
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_178;
                }
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc 
                    = ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel))
                        ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                        : vlSelf->Tile__DOT__core__DOT__dpath__DOT___next_pc_T_9);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                                & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))))) {
            if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                       & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc;
            }
        }
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs[vlSelf->__Vdlyvdim0__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0;
    }
    vlSelf->io_host_tohost = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc 
        = (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_239);
    if (((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                      & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type 
            = vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type;
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1 
        = __Vdly__Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1;
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc 
        = (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___GEN_31);
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__5(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__5\n"); );
    // Body
    if (((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc_check = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                      & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type 
            = vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc_check 
            = (1U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel));
    }
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->reset) | (
                                                   (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))))) {
        if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                   & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in 
                = ((6U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel))
                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen_io_out
                    : vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1);
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                = (((0U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op)) 
                    | (1U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op)))
                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum
                    : (((5U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op)) 
                        | (7U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op)))
                        ? (1U & (((vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
                                   >> 0x1fU) == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B 
                                                 >> 0x1fU))
                                  ? (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum 
                                     >> 0x1fU) : ((2U 
                                                   & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
                                                   ? 
                                                  (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
                                                   >> 0x1fU))))
                        : (((9U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op)) 
                            | (8U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op)))
                            ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftr_T_5)
                            : ((6U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
                                ? ((0x55555555U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_38 
                                                   >> 1U)) 
                                   | (0xaaaaaaaaU & 
                                      (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_38 
                                       << 1U))) : (
                                                   (2U 
                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
                                                    ? 
                                                   (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
                                                     ? 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
                                                     | vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
                                                      ? 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
                                                      ^ vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
                                                       ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A
                                                       : vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B))))))));
        }
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__6(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__6\n"); );
    // Body
    if (((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                      & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd 
            = ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                ? 0U : ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                         ? 0U : (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672)));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en 
            = ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
               | ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                  | ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                     | ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                        | ((0x63U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                           & ((0x1063U != (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                              & ((0x4063U != (0x707fU 
                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                 & ((0x5063U != (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                    & ((0x6063U != 
                                        (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                       & ((0x7063U 
                                           != (0x707fU 
                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                          & ((3U == 
                                              (0x707fU 
                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                             | ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                | ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                   | ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                      | ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                         | ((0x23U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                            & ((0x1023U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                               & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_609))))))))))))))))));
    }
    if ((1U & (~ ((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                            & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))))) {
        if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                   & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel 
                = ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                    ? 0U : ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                             ? 0U : (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576)));
        }
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__7(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mfromhost 
        = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)
            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
            : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)
                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)
                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                    : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
                        ? ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                            : ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                : ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                    : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                        : ((0x741U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                            : ((0x321U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                                : (
                                                   (0x340U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                                      : 
                                                     ((0x343U 
                                                       == 
                                                       (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                                       : 
                                                      ((0x780U 
                                                        == 
                                                        (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0
                                                        : 
                                                       ((0x781U 
                                                         == 
                                                         (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                          >> 0x14U))
                                                         ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                         : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0))))))))))))
                        : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0))));
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->reset) | (
                                                   (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))))) {
        if ((1U & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
                   & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst;
        }
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__csrValid 
        = (((((((((((((((((((((((((((((0xc00U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                  >> 0x14U)) 
                                      | (0xc01U == 
                                         (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                          >> 0x14U))) 
                                     | (0xc02U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))) 
                                    | (0xc80U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                  >> 0x14U))) 
                                   | (0xc81U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))) 
                                  | (0xc82U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))) 
                                 | (0x900U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))) 
                                | (0x901U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                              >> 0x14U))) 
                               | (0x902U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                             >> 0x14U))) 
                              | (0x980U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                            >> 0x14U))) 
                             | (0x981U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))) 
                            | (0x982U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                          >> 0x14U))) 
                           | (0xf00U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                         >> 0x14U))) 
                          | (0xf01U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                        >> 0x14U))) 
                         | (0xf10U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U))) 
                        | (0x301U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                      >> 0x14U))) | 
                       (0x302U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U))) | (0x304U 
                                                  == 
                                                  (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))) 
                     | (0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U))) | (0x701U 
                                                  == 
                                                  (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))) 
                   | (0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                 >> 0x14U))) | (0x340U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))) 
                 | (0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U))) | (0x342U 
                                              == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                  >> 0x14U))) 
               | (0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                             >> 0x14U))) | (0x344U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))) 
             | (0x780U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) | (0x781U == 
                                          (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))) 
           | (0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                         >> 0x14U)));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__8(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__privValid 
        = ((3U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                  >> 0x1cU)) <= (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__iaddrInvalid 
        = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc_check) 
           & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
              >> 1U));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__laddrInvalid 
        = (1U & ((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type))
                  ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu
                  : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type))
                      ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu
                      : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type)) 
                         & (0U != (3U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__saddrInvalid 
        = (1U & ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type))
                  ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu
                  : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type)) 
                     & (0U != (3U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu)))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall 
        = (IData)(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd)) 
                   & (0U == (0x10100000U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak 
        = (IData)(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd)) 
                   & (0x100000U == (0x10100000U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen 
        = ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd)) 
           | (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd) 
               >> 1U) & (0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                         >> 0xfU)))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__9(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__9\n"); );
    // Init
    CData/*0:0*/ __Vdly__Tile__DOT__dcache__DOT__write_count;
    // Body
    __Vdly__Tile__DOT__dcache__DOT__write_count = vlSelf->Tile__DOT__dcache__DOT__write_count;
    vlSelf->__Vdly__Tile__DOT__dcache__DOT__read_count 
        = vlSelf->Tile__DOT__dcache__DOT__read_count;
    vlSelf->__Vdly__Tile__DOT__icache__DOT__state = vlSelf->Tile__DOT__icache__DOT__state;
    if (vlSelf->reset) {
        __Vdly__Tile__DOT__dcache__DOT__write_count = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[0U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[1U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[2U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[3U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[4U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[5U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[6U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__d[7U] = 0U;
        vlSelf->__Vdly__Tile__DOT__dcache__DOT__read_count = 0U;
        vlSelf->Tile__DOT__arb__DOT__state = 0U;
        vlSelf->__Vdly__Tile__DOT__icache__DOT__state = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[0U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[1U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[2U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[3U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[4U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[5U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[6U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__v[7U] = 0U;
    } else {
        if (vlSelf->Tile__DOT__dcache__DOT___T_1) {
            __Vdly__Tile__DOT__dcache__DOT__write_count 
                = (1U & ((IData)(1U) + (IData)(vlSelf->Tile__DOT__dcache__DOT__write_count)));
        }
        if (vlSelf->Tile__DOT__icache__DOT__wen) {
            if (vlSelf->Tile__DOT__icache__DOT__is_alloc) {
                vlSelf->Tile__DOT__icache__DOT__d[0U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[0U]);
                vlSelf->Tile__DOT__icache__DOT__d[1U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[1U]);
                vlSelf->Tile__DOT__icache__DOT__d[2U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[2U]);
                vlSelf->Tile__DOT__icache__DOT__d[3U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[3U]);
                vlSelf->Tile__DOT__icache__DOT__d[4U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[4U]);
                vlSelf->Tile__DOT__icache__DOT__d[5U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[5U]);
                vlSelf->Tile__DOT__icache__DOT__d[6U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[6U]);
                vlSelf->Tile__DOT__icache__DOT__d[7U] 
                    = (~ vlSelf->Tile__DOT__icache__DOT___d_T_4[7U]);
            } else {
                vlSelf->Tile__DOT__icache__DOT__d[0U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[0U];
                vlSelf->Tile__DOT__icache__DOT__d[1U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[1U];
                vlSelf->Tile__DOT__icache__DOT__d[2U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[2U];
                vlSelf->Tile__DOT__icache__DOT__d[3U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[3U];
                vlSelf->Tile__DOT__icache__DOT__d[4U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[4U];
                vlSelf->Tile__DOT__icache__DOT__d[5U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[5U];
                vlSelf->Tile__DOT__icache__DOT__d[6U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[6U];
                vlSelf->Tile__DOT__icache__DOT__d[7U] 
                    = vlSelf->Tile__DOT__icache__DOT___d_T_2[7U];
            }
        }
        if (vlSelf->Tile__DOT__dcache__DOT___T) {
            vlSelf->__Vdly__Tile__DOT__dcache__DOT__read_count 
                = (1U & ((IData)(1U) + (IData)(vlSelf->Tile__DOT__dcache__DOT__read_count)));
        }
        vlSelf->Tile__DOT__arb__DOT__state = ((0U == (IData)(vlSelf->Tile__DOT__arb__DOT__state))
                                               ? (((IData)(vlSelf->Tile__DOT__arb_io_dcache_aw_ready) 
                                                   & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_aw_valid))
                                                   ? 3U
                                                   : 
                                                  (((IData)(vlSelf->Tile__DOT__arb_io_dcache_ar_ready) 
                                                    & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid))
                                                    ? 2U
                                                    : (IData)(vlSelf->Tile__DOT__arb__DOT___GEN_0)))
                                               : ((1U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state))
                                                   ? (IData)(vlSelf->Tile__DOT__arb__DOT___GEN_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->Tile__DOT__arb__DOT__state))
                                                    ? (IData)(vlSelf->Tile__DOT__arb__DOT___GEN_3)
                                                    : (IData)(vlSelf->Tile__DOT__arb__DOT___GEN_8))));
        if ((0U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
                vlSelf->__Vdly__Tile__DOT__icache__DOT__state = 1U;
            }
        } else {
            vlSelf->__Vdly__Tile__DOT__icache__DOT__state 
                = ((1U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                    ? ((IData)(vlSelf->Tile__DOT__icache__DOT__hit)
                        ? ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)
                            ? 0U : 1U) : (IData)(vlSelf->Tile__DOT__icache__DOT___GEN_107))
                    : ((2U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                        ? ((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T)
                            ? 0U : (IData)(vlSelf->Tile__DOT__icache__DOT___GEN_107))
                        : (IData)(vlSelf->Tile__DOT__icache__DOT___GEN_128)));
        }
        if (vlSelf->Tile__DOT__dcache__DOT__wen) {
            vlSelf->Tile__DOT__dcache__DOT__v[0U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[0U];
            vlSelf->Tile__DOT__dcache__DOT__v[1U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[1U];
            vlSelf->Tile__DOT__dcache__DOT__v[2U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[2U];
            vlSelf->Tile__DOT__dcache__DOT__v[3U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[3U];
            vlSelf->Tile__DOT__dcache__DOT__v[4U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[4U];
            vlSelf->Tile__DOT__dcache__DOT__v[5U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[5U];
            vlSelf->Tile__DOT__dcache__DOT__v[6U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[6U];
            vlSelf->Tile__DOT__dcache__DOT__v[7U] = 
                vlSelf->Tile__DOT__dcache__DOT___v_T_1[7U];
        }
    }
    if (vlSelf->Tile__DOT__dcache__DOT___T) {
        if ((1U & (~ (IData)(vlSelf->Tile__DOT__dcache__DOT__read_count)))) {
            vlSelf->Tile__DOT__dcache__DOT__refill_buf_0 
                = vlSelf->io_nasti_r_bits_data;
        }
        if (vlSelf->Tile__DOT__dcache__DOT__read_count) {
            vlSelf->Tile__DOT__dcache__DOT__refill_buf_1 
                = vlSelf->io_nasti_r_bits_data;
        }
    }
    if (vlSelf->Tile__DOT__icache__DOT__ren_reg) {
        vlSelf->Tile__DOT__icache__DOT__rdata_buf[0U] 
            = vlSelf->Tile__DOT__icache__DOT__rdata[0U];
        vlSelf->Tile__DOT__icache__DOT__rdata_buf[1U] 
            = vlSelf->Tile__DOT__icache__DOT__rdata[1U];
        vlSelf->Tile__DOT__icache__DOT__rdata_buf[2U] 
            = vlSelf->Tile__DOT__icache__DOT__rdata[2U];
        vlSelf->Tile__DOT__icache__DOT__rdata_buf[3U] 
            = vlSelf->Tile__DOT__icache__DOT__rdata[3U];
    }
    vlSelf->Tile__DOT__icache__DOT__is_alloc_reg = 
        ((6U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
         & (IData)(vlSelf->Tile__DOT__icache__DOT__read_wrap_out));
    vlSelf->Tile__DOT__dcache__DOT__write_count = __Vdly__Tile__DOT__dcache__DOT__write_count;
    vlSelf->Tile__DOT__icache__DOT__ren_reg = (((~ (IData)(vlSelf->Tile__DOT__icache__DOT__wen)) 
                                                & ((0U 
                                                    == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))) 
                                               & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)));
}

extern const VlWide<9>/*287:0*/ VTile__ConstPool__CONST_hd2851b67_0;

VL_INLINE_OPT void VTile___024root___sequent__TOP__10(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__10\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_hd0974b81__0;
    VlWide<9>/*287:0*/ __Vtemp_h2ceaa878__0;
    // Body
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_3__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_1__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_1__v0 = 0U;
    if (vlSelf->Tile__DOT__dcache_io_cpu_resp_valid) {
        vlSelf->Tile__DOT__dcache__DOT__cpu_mask = 
            (0xfU & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T_10));
        VL_EXTEND_WI(287,32, __Vtemp_hd0974b81__0, vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2);
        VL_SHIFTL_WWI(287,287,8, __Vtemp_h2ceaa878__0, __Vtemp_hd0974b81__0, 
                      ((0x10U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum 
                                 << 3U)) | (8U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum 
                                                  << 3U))));
        vlSelf->Tile__DOT__dcache__DOT__cpu_data = 
            (VTile__ConstPool__CONST_hd2851b67_0[0U] 
             & __Vtemp_h2ceaa878__0[0U]);
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 5U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 0xcU))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_0__v0 
            = (0xffU & vlSelf->Tile__DOT__dcache__DOT__wdata[3U]);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 6U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 0xdU))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 7U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_3__v0 
            = (vlSelf->Tile__DOT__dcache__DOT__wdata[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 0xeU))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 8U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_0__v0 
            = (0xffU & vlSelf->Tile__DOT__dcache__DOT__wdata[2U]);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__11(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_1__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_1__v0 = 0U;
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__icache__DOT__v[0U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__v[1U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__v[2U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__v[3U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__v[4U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__v[5U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__v[6U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__v[7U] = 0U;
    } else if (vlSelf->Tile__DOT__icache__DOT__wen) {
        vlSelf->Tile__DOT__icache__DOT__v[0U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[0U];
        vlSelf->Tile__DOT__icache__DOT__v[1U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[1U];
        vlSelf->Tile__DOT__icache__DOT__v[2U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[2U];
        vlSelf->Tile__DOT__icache__DOT__v[3U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[3U];
        vlSelf->Tile__DOT__icache__DOT__v[4U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[4U];
        vlSelf->Tile__DOT__icache__DOT__v[5U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[5U];
        vlSelf->Tile__DOT__icache__DOT__v[6U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[6U];
        vlSelf->Tile__DOT__icache__DOT__v[7U] = vlSelf->Tile__DOT__icache__DOT___v_T_1[7U];
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 5U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 0xcU))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_0__v0 
            = (0xffU & vlSelf->Tile__DOT__icache__DOT__wdata[3U]);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 6U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 0xdU))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 0xeU))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 8U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_0__v0 
            = (0xffU & vlSelf->Tile__DOT__icache__DOT__wdata[2U]);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__12(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__12\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__Tile__DOT__icache__DOT__metaMem_tag__v0;
    IData/*19:0*/ __Vdlyvval__Tile__DOT__icache__DOT__metaMem_tag__v0;
    CData/*0:0*/ __Vdlyvset__Tile__DOT__icache__DOT__metaMem_tag__v0;
    // Body
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_3__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_3__v0 = 0U;
    __Vdlyvset__Tile__DOT__icache__DOT__metaMem_tag__v0 = 0U;
    if (((IData)(vlSelf->Tile__DOT__icache__DOT___ren_T_2) 
         & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
        vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0 
            = (0xffU & (IData)((vlSelf->Tile__DOT__core__DOT__dpath__DOT__next_pc 
                                >> 4U)));
    }
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
            if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)))) {
                if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)))) {
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183;
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182;
                }
            }
        }
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle 
            = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)
                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___cycle_T_1
                : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)
                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___cycle_T_1
                    : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)
                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___cycle_T_1
                        : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_193)));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 0xfU))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_3__v0 
            = (vlSelf->Tile__DOT__icache__DOT__wdata[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 7U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_3__v0 
            = (vlSelf->Tile__DOT__icache__DOT__wdata[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if (((IData)(vlSelf->Tile__DOT__icache__DOT__wen) 
         & (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc))) {
        __Vdlyvval__Tile__DOT__icache__DOT__metaMem_tag__v0 
            = (vlSelf->Tile__DOT__icache__DOT__addr_reg 
               >> 0xcU);
        __Vdlyvset__Tile__DOT__icache__DOT__metaMem_tag__v0 = 1U;
        __Vdlyvdim0__Tile__DOT__icache__DOT__metaMem_tag__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if (__Vdlyvset__Tile__DOT__icache__DOT__metaMem_tag__v0) {
        vlSelf->Tile__DOT__icache__DOT__metaMem_tag[__Vdlyvdim0__Tile__DOT__icache__DOT__metaMem_tag__v0] 
            = __Vdlyvval__Tile__DOT__icache__DOT__metaMem_tag__v0;
    }
    vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_data 
        = vlSelf->Tile__DOT__icache__DOT__metaMem_tag
        [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0];
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__13(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_3__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_1__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_1__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_3__v0 = 0U;
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 3U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_3__v0 
            = (vlSelf->Tile__DOT__icache__DOT__wdata[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 2U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 9U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 1U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & vlSelf->Tile__DOT__icache__DOT__wmask)) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_0__v0 
            = (0xffU & vlSelf->Tile__DOT__icache__DOT__wdata[0U]);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 0xaU))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__wdata[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 4U))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_0__v0 
            = (0xffU & vlSelf->Tile__DOT__icache__DOT__wdata[1U]);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__icache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__icache__DOT__wmask >> 0xbU))) {
        vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_3__v0 
            = (vlSelf->Tile__DOT__icache__DOT__wdata[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__14(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__14\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__Tile__DOT__dcache__DOT__metaMem_tag__v0;
    IData/*19:0*/ __Vdlyvval__Tile__DOT__dcache__DOT__metaMem_tag__v0;
    CData/*0:0*/ __Vdlyvset__Tile__DOT__dcache__DOT__metaMem_tag__v0;
    // Body
    vlSelf->__Vdly__Tile__DOT__dcache__DOT__state = vlSelf->Tile__DOT__dcache__DOT__state;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_3__v0 = 0U;
    __Vdlyvset__Tile__DOT__dcache__DOT__metaMem_tag__v0 = 0U;
    if (vlSelf->Tile__DOT__dcache__DOT__ren_reg) {
        vlSelf->Tile__DOT__dcache__DOT__rdata_buf[0U] 
            = vlSelf->Tile__DOT__dcache__DOT__rdata[0U];
        vlSelf->Tile__DOT__dcache__DOT__rdata_buf[1U] 
            = vlSelf->Tile__DOT__dcache__DOT__rdata[1U];
        vlSelf->Tile__DOT__dcache__DOT__rdata_buf[2U] 
            = vlSelf->Tile__DOT__dcache__DOT__rdata[2U];
        vlSelf->Tile__DOT__dcache__DOT__rdata_buf[3U] 
            = vlSelf->Tile__DOT__dcache__DOT__rdata[3U];
    }
    if (((IData)(vlSelf->Tile__DOT__dcache__DOT___ren_T_2) 
         & (IData)(vlSelf->Tile__DOT__core__DOT__dpath_io_dcache_req_valid))) {
        vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0 
            = (0xffU & (IData)((0xfffffffffffffffULL 
                                & ((QData)((IData)(
                                                   (vlSelf->Tile__DOT__core__DOT__dpath__DOT___daddr_T 
                                                    >> 2U))) 
                                   >> 2U))));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__Tile__DOT__dcache__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))) {
        if (vlSelf->Tile__DOT__core__DOT__dpath_io_dcache_req_valid) {
            vlSelf->__Vdly__Tile__DOT__dcache__DOT__state 
                = ((0U != (0xfU & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T_10)))
                    ? 2U : 1U);
        }
    } else {
        vlSelf->__Vdly__Tile__DOT__dcache__DOT__state 
            = ((1U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                ? ((IData)(vlSelf->Tile__DOT__dcache__DOT__hit)
                    ? ((IData)(vlSelf->Tile__DOT__core__DOT__dpath_io_dcache_req_valid)
                        ? ((0U != (0xfU & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T_10)))
                            ? 2U : 1U) : 0U) : (IData)(vlSelf->Tile__DOT__dcache__DOT___GEN_108))
                : ((2U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                    ? (((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T) 
                        | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))
                        ? 0U : (IData)(vlSelf->Tile__DOT__dcache__DOT___GEN_108))
                    : (IData)(vlSelf->Tile__DOT__dcache__DOT___GEN_128)));
    }
    vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg = 
        ((6U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
         & (IData)(vlSelf->Tile__DOT__dcache__DOT__read_wrap_out));
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 0xfU))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_3__v0 
            = (vlSelf->Tile__DOT__dcache__DOT__wdata[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if (((IData)(vlSelf->Tile__DOT__dcache__DOT__wen) 
         & (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc))) {
        __Vdlyvval__Tile__DOT__dcache__DOT__metaMem_tag__v0 
            = (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
               >> 0xcU);
        __Vdlyvset__Tile__DOT__dcache__DOT__metaMem_tag__v0 = 1U;
        __Vdlyvdim0__Tile__DOT__dcache__DOT__metaMem_tag__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if (__Vdlyvset__Tile__DOT__dcache__DOT__metaMem_tag__v0) {
        vlSelf->Tile__DOT__dcache__DOT__metaMem_tag[__Vdlyvdim0__Tile__DOT__dcache__DOT__metaMem_tag__v0] 
            = __Vdlyvval__Tile__DOT__dcache__DOT__metaMem_tag__v0;
    }
    vlSelf->Tile__DOT__dcache__DOT__ren_reg = (((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__wen)) 
                                                & ((0U 
                                                    == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)))) 
                                               & (IData)(vlSelf->Tile__DOT__core__DOT__dpath_io_dcache_req_valid));
    vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_data 
        = vlSelf->Tile__DOT__dcache__DOT__metaMem_tag
        [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0];
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__15(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__15\n"); );
    // Body
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_3__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_0__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_1__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_1__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_2__v0 = 0U;
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_3__v0 = 0U;
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 3U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_3__v0 
            = (vlSelf->Tile__DOT__dcache__DOT__wdata[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 2U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 9U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 1U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_1__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & vlSelf->Tile__DOT__dcache__DOT__wmask)) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_0__v0 
            = (0xffU & vlSelf->Tile__DOT__dcache__DOT__wdata[0U]);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 0xaU))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__wdata[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_2__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 4U))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_0__v0 
            = (0xffU & vlSelf->Tile__DOT__dcache__DOT__wdata[1U]);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_0__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
    if ((((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T_3) 
          | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc)) 
         & (vlSelf->Tile__DOT__dcache__DOT__wmask >> 0xbU))) {
        vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_3__v0 
            = (vlSelf->Tile__DOT__dcache__DOT__wdata[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_3__v0 
            = (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__16(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__16\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_he7bdef52__0;
    // Body
    if (vlSelf->Tile__DOT__icache_io_cpu_resp_valid) {
        vlSelf->Tile__DOT__icache__DOT__cpu_data = 0U;
        vlSelf->Tile__DOT__icache__DOT__cpu_mask = 0U;
    }
    if (vlSelf->Tile__DOT__dcache_io_cpu_resp_valid) {
        vlSelf->Tile__DOT__dcache__DOT__addr_reg = (IData)(
                                                           ((QData)((IData)(
                                                                            (vlSelf->Tile__DOT__core__DOT__dpath__DOT___daddr_T 
                                                                             >> 2U))) 
                                                            << 2U));
    }
    vlSelf->Tile__DOT__icache__DOT__state = vlSelf->__Vdly__Tile__DOT__icache__DOT__state;
    vlSelf->Tile__DOT__dcache__DOT__state = vlSelf->__Vdly__Tile__DOT__dcache__DOT__state;
    VL_SHIFTR_WWI(256,256,8, __Vtemp_he7bdef52__0, vlSelf->Tile__DOT__dcache__DOT__v, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT___hit_T[0U] = __Vtemp_he7bdef52__0[0U];
    vlSelf->Tile__DOT__dcache__DOT___hit_T[1U] = __Vtemp_he7bdef52__0[1U];
    vlSelf->Tile__DOT__dcache__DOT___hit_T[2U] = __Vtemp_he7bdef52__0[2U];
    vlSelf->Tile__DOT__dcache__DOT___hit_T[3U] = __Vtemp_he7bdef52__0[3U];
    vlSelf->Tile__DOT__dcache__DOT___hit_T[4U] = __Vtemp_he7bdef52__0[4U];
    vlSelf->Tile__DOT__dcache__DOT___hit_T[5U] = __Vtemp_he7bdef52__0[5U];
    vlSelf->Tile__DOT__dcache__DOT___hit_T[6U] = __Vtemp_he7bdef52__0[6U];
    vlSelf->Tile__DOT__dcache__DOT___hit_T[7U] = __Vtemp_he7bdef52__0[7U];
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__17(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__17\n"); );
    // Init
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_68;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_80;
    // Body
    Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_68 
        = ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp
            : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_
                : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh
                    : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch
                        : ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc
                            : ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause
                                : ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr
                                    : ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP) 
                                            << 7U) 
                                           | ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP) 
                                              << 3U))
                                        : ((0x780U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                                            : ((0x781U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mfromhost
                                                : (
                                                   (0x300U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? 
                                                   (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE))))
                                                    : 0U)))))))))));
    Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_80 
        = ((0x900U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle
            : ((0x901U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_
                : ((0x902U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret
                    : ((0x980U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh
                        : ((0x981U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh
                            : ((0x982U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth
                                : ((0xf00U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? 0x100100U : (
                                                   (0xf01U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? 0U
                                                    : 
                                                   ((0xf10U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? 0U
                                                     : 
                                                    ((0x301U 
                                                      == 
                                                      (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                       >> 0x14U))
                                                      ? 0x100U
                                                      : 
                                                     ((0x302U 
                                                       == 
                                                       (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                        >> 0x14U))
                                                       ? 0U
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                         >> 0x14U))
                                                        ? 
                                                       (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE) 
                                                         << 7U) 
                                                        | ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE) 
                                                           << 3U))
                                                        : Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_68))))))))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_out 
        = ((0xc00U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle
            : ((0xc01U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_
                : ((0xc02U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret
                    : ((0xc80U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh
                        : ((0xc81U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh
                            : ((0xc82U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth
                                : Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_80))))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__18(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__18\n"); );
    // Body
    vlSelf->__Vdly__Tile__DOT__icache__DOT__read_count 
        = vlSelf->Tile__DOT__icache__DOT__read_count;
    if (vlSelf->reset) {
        vlSelf->__Vdly__Tile__DOT__icache__DOT__read_count = 0U;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst = 0x13U;
    } else {
        if (vlSelf->Tile__DOT__icache__DOT___T) {
            vlSelf->__Vdly__Tile__DOT__icache__DOT__read_count 
                = (1U & ((IData)(1U) + (IData)(vlSelf->Tile__DOT__icache__DOT__read_count)));
        }
        if ((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                = (((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__started) 
                      | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_inst_kill)) 
                     | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond_io_taken)) 
                    | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))
                    ? 0x13U : ((3U == (3U & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                             >> 2U)))
                                ? vlSelf->Tile__DOT__icache__DOT__read[3U]
                                : ((2U == (3U & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                                 >> 2U)))
                                    ? vlSelf->Tile__DOT__icache__DOT__read[2U]
                                    : ((1U == (3U & 
                                               (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                                >> 2U)))
                                        ? vlSelf->Tile__DOT__icache__DOT__read[1U]
                                        : vlSelf->Tile__DOT__icache__DOT__read[0U]))));
        }
    }
    if (vlSelf->Tile__DOT__icache__DOT___T) {
        if ((1U & (~ (IData)(vlSelf->Tile__DOT__icache__DOT__read_count)))) {
            vlSelf->Tile__DOT__icache__DOT__refill_buf_0 
                = vlSelf->io_nasti_r_bits_data;
        }
        if (vlSelf->Tile__DOT__icache__DOT__read_count) {
            vlSelf->Tile__DOT__icache__DOT__refill_buf_1 
                = vlSelf->io_nasti_r_bits_data;
        }
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_0__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_0[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_0__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_2__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_2[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_2__v0;
    }
    if (vlSelf->Tile__DOT__icache_io_cpu_resp_valid) {
        vlSelf->Tile__DOT__icache__DOT__addr_reg = (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__next_pc);
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__19(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__19\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Tile__DOT__dcache__DOT__d[0U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__d[1U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__d[2U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__d[3U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__d[4U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__d[5U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__d[6U] = 0U;
        vlSelf->Tile__DOT__dcache__DOT__d[7U] = 0U;
    } else if (vlSelf->Tile__DOT__dcache__DOT__wen) {
        if (vlSelf->Tile__DOT__dcache__DOT__is_alloc) {
            vlSelf->Tile__DOT__dcache__DOT__d[0U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[0U]);
            vlSelf->Tile__DOT__dcache__DOT__d[1U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[1U]);
            vlSelf->Tile__DOT__dcache__DOT__d[2U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[2U]);
            vlSelf->Tile__DOT__dcache__DOT__d[3U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[3U]);
            vlSelf->Tile__DOT__dcache__DOT__d[4U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[4U]);
            vlSelf->Tile__DOT__dcache__DOT__d[5U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[5U]);
            vlSelf->Tile__DOT__dcache__DOT__d[6U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[6U]);
            vlSelf->Tile__DOT__dcache__DOT__d[7U] = 
                (~ vlSelf->Tile__DOT__dcache__DOT___d_T_4[7U]);
        } else {
            vlSelf->Tile__DOT__dcache__DOT__d[0U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[0U];
            vlSelf->Tile__DOT__dcache__DOT__d[1U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[1U];
            vlSelf->Tile__DOT__dcache__DOT__d[2U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[2U];
            vlSelf->Tile__DOT__dcache__DOT__d[3U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[3U];
            vlSelf->Tile__DOT__dcache__DOT__d[4U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[4U];
            vlSelf->Tile__DOT__dcache__DOT__d[5U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[5U];
            vlSelf->Tile__DOT__dcache__DOT__d[6U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[6U];
            vlSelf->Tile__DOT__dcache__DOT__d[7U] = 
                vlSelf->Tile__DOT__dcache__DOT___d_T_2[7U];
        }
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_0__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_0[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_0__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_2__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_2[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_2__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_1__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_1[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_1__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_1[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_1__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_1[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_2__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_2[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_2__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_3__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_3[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_3__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_3__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_3[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_3__v0;
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__20(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__20\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_3__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_3[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_3__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_1__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_1[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_2__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_2[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_2__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_0__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_0[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_0__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_1__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_1[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_3__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_3[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_3__v0;
    }
    vlSelf->Tile__DOT__icache__DOT__read_count = vlSelf->__Vdly__Tile__DOT__icache__DOT__read_count;
}

VL_INLINE_OPT void VTile___024root___combo__TOP__0(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT___T = ((6U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                          & ((IData)(vlSelf->io_nasti_r_valid) 
                                             & (1U 
                                                == (IData)(vlSelf->Tile__DOT__arb__DOT__state))));
}

extern const VlWide<8>/*255:0*/ VTile__ConstPool__CONST_h4e9f510d_0;

VL_INLINE_OPT void VTile___024root___sequent__TOP__21(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__21\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hbad69889__0;
    // Body
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hbad69889__0, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[0U] = (vlSelf->Tile__DOT__dcache__DOT__v[0U] 
                                                  | __Vtemp_hbad69889__0[0U]);
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[1U] = (vlSelf->Tile__DOT__dcache__DOT__v[1U] 
                                                  | __Vtemp_hbad69889__0[1U]);
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[2U] = (vlSelf->Tile__DOT__dcache__DOT__v[2U] 
                                                  | __Vtemp_hbad69889__0[2U]);
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[3U] = (vlSelf->Tile__DOT__dcache__DOT__v[3U] 
                                                  | __Vtemp_hbad69889__0[3U]);
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[4U] = (vlSelf->Tile__DOT__dcache__DOT__v[4U] 
                                                  | __Vtemp_hbad69889__0[4U]);
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[5U] = (vlSelf->Tile__DOT__dcache__DOT__v[5U] 
                                                  | __Vtemp_hbad69889__0[5U]);
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[6U] = (vlSelf->Tile__DOT__dcache__DOT__v[6U] 
                                                  | __Vtemp_hbad69889__0[6U]);
    vlSelf->Tile__DOT__dcache__DOT___v_T_1[7U] = (vlSelf->Tile__DOT__dcache__DOT__v[7U] 
                                                  | __Vtemp_hbad69889__0[7U]);
}

VL_INLINE_OPT void VTile___024root___combo__TOP__1(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT__read_wrap_out = 
        ((IData)(vlSelf->Tile__DOT__icache__DOT___T) 
         & (IData)(vlSelf->Tile__DOT__icache__DOT__read_count));
    vlSelf->Tile__DOT__icache__DOT__is_alloc = ((6U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                & (IData)(vlSelf->Tile__DOT__icache__DOT__read_wrap_out));
    if (vlSelf->Tile__DOT__icache__DOT__is_alloc) {
        vlSelf->Tile__DOT__icache__DOT__wdata[0U] = (IData)(vlSelf->Tile__DOT__icache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__icache__DOT__wdata[1U] = (IData)(
                                                            (vlSelf->Tile__DOT__icache__DOT__refill_buf_0 
                                                             >> 0x20U));
        vlSelf->Tile__DOT__icache__DOT__wdata[2U] = (IData)(vlSelf->io_nasti_r_bits_data);
        vlSelf->Tile__DOT__icache__DOT__wdata[3U] = (IData)(
                                                            (vlSelf->io_nasti_r_bits_data 
                                                             >> 0x20U));
    } else {
        vlSelf->Tile__DOT__icache__DOT__wdata[0U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[1U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[2U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[3U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__22(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__22\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h2ac3c255__0;
    // Body
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h2ac3c255__0, vlSelf->Tile__DOT__icache__DOT__v, 
                  (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__icache__DOT___hit_T[0U] = __Vtemp_h2ac3c255__0[0U];
    vlSelf->Tile__DOT__icache__DOT___hit_T[1U] = __Vtemp_h2ac3c255__0[1U];
    vlSelf->Tile__DOT__icache__DOT___hit_T[2U] = __Vtemp_h2ac3c255__0[2U];
    vlSelf->Tile__DOT__icache__DOT___hit_T[3U] = __Vtemp_h2ac3c255__0[3U];
    vlSelf->Tile__DOT__icache__DOT___hit_T[4U] = __Vtemp_h2ac3c255__0[4U];
    vlSelf->Tile__DOT__icache__DOT___hit_T[5U] = __Vtemp_h2ac3c255__0[5U];
    vlSelf->Tile__DOT__icache__DOT___hit_T[6U] = __Vtemp_h2ac3c255__0[6U];
    vlSelf->Tile__DOT__icache__DOT___hit_T[7U] = __Vtemp_h2ac3c255__0[7U];
    vlSelf->Tile__DOT__icache__DOT__hit = (vlSelf->Tile__DOT__icache__DOT___hit_T[0U] 
                                           & (vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_data 
                                              == (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                                  >> 0xcU)));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__23(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__23\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT__read_count = vlSelf->__Vdly__Tile__DOT__dcache__DOT__read_count;
}

VL_INLINE_OPT void VTile___024root___combo__TOP__2(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0 
        = ((IData)(vlSelf->io_host_fromhost_valid) ? vlSelf->io_host_fromhost_bits
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mfromhost);
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__24(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__24\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___time_T_1 
        = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___cycle_T_1 
        = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1 
        = ((0xffffffffU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2 
        = ((0xffffffffU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh);
}

VL_INLINE_OPT void VTile___024root___combo__TOP__3(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___T = ((6U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                          & ((IData)(vlSelf->io_nasti_r_valid) 
                                             & (2U 
                                                == (IData)(vlSelf->Tile__DOT__arb__DOT__state))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__25(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__25\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret 
        = (IData)(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd)) 
                   & (0x10000000U == (0x10100000U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst))));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__4(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT__read_wrap_out = 
        ((IData)(vlSelf->Tile__DOT__dcache__DOT___T) 
         & (IData)(vlSelf->Tile__DOT__dcache__DOT__read_count));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__26(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__26\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h6b478f06__0;
    // Body
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h6b478f06__0, vlSelf->Tile__DOT__dcache__DOT__d, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT__is_dirty = (1U 
                                                & (vlSelf->Tile__DOT__dcache__DOT___hit_T[0U] 
                                                   & __Vtemp_h6b478f06__0[0U]));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt 
        = (((((((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__illegal) 
                  | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__iaddrInvalid)) 
                 | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__laddrInvalid)) 
                | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__saddrInvalid)) 
               | ((0U != (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd))) 
                  & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__csrValid)) 
                     | (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__privValid))))) 
              | ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) 
                 & (((3U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                             >> 0x1eU)) | (0x301U == 
                                           (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                            >> 0x14U))) 
                    | (0x302U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                  >> 0x14U))))) | (
                                                   (4U 
                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd)) 
                                                   & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__privValid)))) 
            | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall)) 
           | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak));
    vlSelf->Tile__DOT__dcache__DOT__hit = (vlSelf->Tile__DOT__dcache__DOT___hit_T[0U] 
                                           & (vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_data 
                                              == (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                                                  >> 0xcU)));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__5(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT__is_alloc = ((6U 
                                                 == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                & (IData)(vlSelf->Tile__DOT__dcache__DOT__read_wrap_out));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__27(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__27\n"); );
    // Init
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata1;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__rs1hazard;
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__started 
        = vlSelf->reset;
    vlSelf->Tile__DOT__dcache_io_cpu_resp_valid = (
                                                   ((0U 
                                                     == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                    | ((1U 
                                                        == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                       & (IData)(vlSelf->Tile__DOT__dcache__DOT__hit))) 
                                                   | ((IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->Tile__DOT__dcache__DOT__cpu_mask))))));
    vlSelf->Tile__DOT__dcache__DOT___wen_T = ((IData)(vlSelf->Tile__DOT__dcache__DOT__hit) 
                                              | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg));
    Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata1 
        = ((0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                            >> 0xfU))) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs
           [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                      >> 0xfU))] : 0U);
    Tile__DOT__core__DOT__dpath__DOT__rs1hazard = (
                                                   ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                           >> 0xfU)))) 
                                                   & ((0x1fU 
                                                       & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                          >> 0xfU)) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                          >> 7U))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 = 
        (((0U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)) 
          & (IData)(Tile__DOT__core__DOT__dpath__DOT__rs1hazard))
          ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu
          : Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata1);
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__28(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__28\n"); );
    // Init
    CData/*0:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_692;
    // Body
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_609 
        = ((0x2023U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((0x13U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              | ((0x2013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 | ((0x3013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    | ((0x4013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       | ((0x6013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          | ((0x7013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             | ((0x1013U == (0xfe00707fU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                | ((0x5013U == (0xfe00707fU 
                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   | ((0x40005013U 
                                       == (0xfe00707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                      | ((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         | ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            | ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               | ((0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  | ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     | ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                        | ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                           | ((0x40005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                              | ((0x6033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                 | ((0x7033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                    | ((0xfU 
                                                                        != 
                                                                        (0xf00fffffU 
                                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                       & ((0x100fU 
                                                                           != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                                                          & ((0x1073U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                             | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | (0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)))))))))))))))))))))))))))));
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_692 
        = ((0x2033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((0x3033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              & ((0x4033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 & ((0x5033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    & ((0x40005033U != (0xfe00707fU 
                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       & ((0x6033U != (0xfe00707fU 
                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          & ((0x7033U != (0xfe00707fU 
                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             & ((0xfU != (0xf00fffffU 
                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                & ((0x100fU != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                   & ((0x1073U != (0x707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                      & ((0x2073U != 
                                          (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         & ((0x3073U 
                                             != (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            & ((0x5073U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               & ((0x6073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  & ((0x7073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     & ((0x73U 
                                                         != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                                        & ((0x100073U 
                                                            != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                                           & ((0x10000073U 
                                                               != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                                              & (0x10200073U 
                                                                 != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)))))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_709 
        = ((0x4003U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((0x5003U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              & ((0x23U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 & ((0x1023U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    & ((0x2023U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       & ((0x13U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          & ((0x2013U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             & ((0x3013U != (0x707fU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                & ((0x4013U != (0x707fU 
                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   & ((0x6013U != (0x707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                      & ((0x7013U != 
                                          (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         & ((0x1013U 
                                             != (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            & ((0x5013U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               & ((0x40005013U 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  & ((0x33U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     & ((0x40000033U 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                        & ((0x1033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                           & (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_692))))))))))))))))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__29(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__29\n"); );
    // Init
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561;
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642;
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657;
    // Body
    if ((0x4033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    } else if ((0xfU == (0xf00fffffU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    } else if ((0x100fU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    } else if ((0x1073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 1U;
    } else if ((0x2073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 2U;
    } else if ((0x3073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 3U;
    } else if ((0x5073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 1U;
    } else if ((0x6073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 2U;
    } else if ((0x7073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 3U;
    } else if ((0x73U == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 4U;
    } else if ((0x100073U == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 4U;
    } else if ((0x10000073U == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 4U;
    } else {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
    }
    if ((0x2023U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x13U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x2013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x3013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x4013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x6013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x7013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x1013U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x5013U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x40005013U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
    } else {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642;
    }
    if ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 2U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 2U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x63U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x1063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x4063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x5063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x6063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x7063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((3U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x1003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x2003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x4003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x5003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x23U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else if ((0x1023U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
    } else {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657;
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__30(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__30\n"); );
    // Init
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_479;
    // Body
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_479 
        = ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 0U : ((0x63U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 0U : ((0x1063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 0U : ((0x4063U == (0x707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 0U : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                            ? 2U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                             ? 1U
                                                             : 0U)))))))))))))));
    if ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type = 0U;
    } else {
        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type 
            = ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                ? 0U : ((0x63U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                         ? 0U : ((0x1063U == (0x707fU 
                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                  ? 0U : ((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                           ? 0U : (
                                                   (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 4U
                                                           : 0U))))))))))));
        vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_479;
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__31(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__31\n"); );
    // Init
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144;
    // Body
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 
        = ((0x4033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 0U : ((0x5033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 0U : ((0x40005033U == (0xfe00707fU 
                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 0U : ((0x6033U == (0xfe00707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 0U : ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    == 
                                                    (0xf00fffffU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x100fU 
                                                     == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                                     ? 2U
                                                     : 
                                                    ((0x1073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x2073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x6073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 2U
                                                          : 
                                                         ((0x7073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 2U
                                                           : 
                                                          ((0x73U 
                                                            == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                                            ? 0U
                                                            : 
                                                           ((0x100073U 
                                                             == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                                             ? 0U
                                                             : 
                                                            ((0x10000073U 
                                                              == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                                              ? 3U
                                                              : 0U))))))))))))))));
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 
        = ((0x2023U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 0U : ((0x13U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 0U : ((0x2013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 0U : ((0x3013U == (0x707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 0U : ((0x4013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40005013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                             ? 0U
                                                             : (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114))))))))))))))));
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 
        = ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 1U : ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 1U : ((0x63U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 0U : ((0x1063U == (0x707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 0U : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 2U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 2U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                             ? 0U
                                                             : (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel = 
        ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
          ? 0U : ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                   ? 0U : (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144)));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__32(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__32\n"); );
    // Init
    CData/*0:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_223;
    // Body
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_223 
        = ((0x2013U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((0x3013U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              & ((0x4013U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 & ((0x6013U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    & ((0x7013U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       & ((0x1013U != (0xfe00707fU 
                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          & ((0x5013U != (0xfe00707fU 
                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             & ((0x40005013U != (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                & ((0x33U == (0xfe00707fU 
                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   | ((0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                      | ((0x1033U == 
                                          (0xfe00707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         | ((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            | ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               | ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  | ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     | ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                        | ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                           | (0x7033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)))))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_185 
        = ((0x7063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((3U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              | ((0x1003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 | ((0x2003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    | ((0x4003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       | ((0x5003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          | ((0x23U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             | ((0x1023U == (0x707fU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                | ((0x2023U == (0x707fU 
                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   | ((0x13U == (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                      | ((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         | ((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            | ((0x4013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               | ((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  | ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     | ((0x1013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                        | ((0x5013U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                           | ((0x40005013U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                 | ((0x40000033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                    | ((0x1033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                       | ((0x2033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                          | ((0x3033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                             | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0xfU 
                                                                                != 
                                                                                (0xf00fffffU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                & ((0x100fU 
                                                                                != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                                                                & ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                                | (0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))))))))))))))))))))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_240 
        = ((0x6fU != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((0x67U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              & ((0x63U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 & ((0x1063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    & ((0x4063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       & ((0x5063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          & ((0x6063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             & ((0x7063U != (0x707fU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                & ((3U != (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   & ((0x1003U != (0x707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                      & ((0x2003U != 
                                          (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         & ((0x4003U 
                                             != (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            & ((0x5003U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               & ((0x23U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  & ((0x1023U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     & ((0x2023U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                        & ((0x13U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                           & (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_223))))))))))))))))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__33(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__33\n"); );
    // Init
    CData/*0:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_405;
    // Body
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_405 
        = ((0x1033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((0x2033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              & ((0x3033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 & ((0x4033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    & ((0x5033U != (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       & ((0x40005033U != (0xfe00707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          & ((0x6033U != (0xfe00707fU 
                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             & ((0x7033U != (0xfe00707fU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                & ((0xfU != (0xf00fffffU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   & ((0x100fU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                      | ((0x1073U == 
                                          (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         | ((0x2073U 
                                             == (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            | ((0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               | ((0x5073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  | ((0x6073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     | ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                        | ((0x73U 
                                                            != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                                           & ((0x100073U 
                                                               != vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                                              & (0x10000073U 
                                                                 == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)))))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_425 
        = ((0x7063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((3U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              | ((0x1003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 | ((0x2003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    | ((0x4003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       | ((0x5003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          | ((0x23U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             & ((0x1023U != (0x707fU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                & ((0x2023U != (0x707fU 
                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   & ((0x13U != (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                      & ((0x2013U != 
                                          (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                         & ((0x3013U 
                                             != (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                            & ((0x4013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                               & ((0x6013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                  & ((0x7013U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                     & ((0x1013U 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                        & ((0x5013U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                           & ((0x40005013U 
                                                               != 
                                                               (0xfe00707fU 
                                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                              & ((0x33U 
                                                                  != 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                 & ((0x40000033U 
                                                                     != 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                                                    & (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_405)))))))))))))))))))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__34(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__34\n"); );
    // Init
    CData/*3:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_311;
    CData/*3:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_326;
    // Body
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_311 
        = ((0x33U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 0U : ((0x40000033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 1U : ((0x1033U == (0xfe00707fU 
                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 6U : ((0x2033U == (0xfe00707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 5U : ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 7U
                                                : (
                                                   (0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 9U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0xf00fffffU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 0xfU
                                                         : 
                                                        ((0x100fU 
                                                          == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                                          ? 0xfU
                                                          : 
                                                         ((0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 0xaU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                            ? 0xaU
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                             ? 0xaU
                                                             : 0xfU)))))))))))))));
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_326 
        = ((0x2003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 0U : ((0x4003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 0U : ((0x5003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 0U : ((0x23U == (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 0U : ((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 5U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 7U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 3U
                                                         : 
                                                        ((0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 2U
                                                          : 
                                                         ((0x1013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 6U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                            ? 8U
                                                            : 
                                                           ((0x40005013U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                             ? 9U
                                                             : (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_311))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 
        ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
          ? 0xbU : ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 0U : ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 0U : ((0x67U == (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 0U : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 0U
                                                          : (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_326)))))))))))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__35(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__35\n"); );
    // Init
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_260;
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_275;
    // Body
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_260 
        = ((0x2033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 0U : ((0x3033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 0U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 0U : ((0x5033U == (0xfe00707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 0U : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0xf00fffffU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x100fU 
                                                       == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                                       ? 0U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x5073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 6U
                                                           : 
                                                          ((0x6073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                            ? 6U
                                                            : 
                                                           ((0x7073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                             ? 6U
                                                             : 0U)))))))))))))));
    Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_275 
        = ((0x23U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
            ? 2U : ((0x1023U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                     ? 2U : ((0x2023U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                              ? 2U : ((0x13U == (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                       ? 1U : ((0x2013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                ? 1U
                                                : (
                                                   (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x33U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                             ? 0U
                                                             : (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_260))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 
        ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
          ? 3U : ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                   ? 3U : ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                            ? 4U : ((0x67U == (0x707fU 
                                               & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                     ? 1U : ((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                              ? 5U : 
                                             ((0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                               ? 5U
                                               : ((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                   ? 5U
                                                   : 
                                                  ((0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 5U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                           ? 1U
                                                           : (IData)(Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_275))))))))))))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_5 
        = (0xfffU & ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel))
                      ? ((0xfe0U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                    >> 0x14U)) | (0x1fU 
                                                  & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                     >> 7U)))
                      : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel))
                          ? (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                             >> 0x14U) : (0xffeU & 
                                          (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                           >> 0x14U)))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__36(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__36\n"); );
    // Init
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl_io_br_type;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata2;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__rs2hazard;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__isSameSign;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu;
    // Body
    Tile__DOT__core__DOT__ctrl_io_br_type = ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                               ? 0U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))
                                                          ? 4U
                                                          : 0U))))))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT__Jimm 
        = ((0x100000U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst) 
                                      | ((0x800U & 
                                          (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                           >> 9U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                  >> 0x14U))))));
    Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata2 
        = ((0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                            >> 0x14U))) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs
           [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                      >> 0x14U))] : 0U);
    Tile__DOT__core__DOT__dpath__DOT__rs2hazard = (
                                                   ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                           >> 0x14U)))) 
                                                   & ((0x1fU 
                                                       & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                          >> 0x14U)) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                          >> 7U))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2 = 
        (((0U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)) 
          & (IData)(Tile__DOT__core__DOT__dpath__DOT__rs2hazard))
          ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu
          : Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata2);
    Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__isSameSign 
        = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 
            >> 0x1fU) == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2 
                          >> 0x1fU));
    Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff 
        = (vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 
           - vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2);
    if (Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__isSameSign) {
        Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt 
            = (1U & (Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff 
                     >> 0x1fU));
        Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu 
            = (1U & (Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff 
                     >> 0x1fU));
    } else {
        Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt 
            = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 
                     >> 0x1fU));
        Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu 
            = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2 
                     >> 0x1fU));
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond_io_taken 
        = (((((((3U == (IData)(Tile__DOT__core__DOT__ctrl_io_br_type)) 
                & (~ (IData)((0U != Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff)))) 
               | ((6U == (IData)(Tile__DOT__core__DOT__ctrl_io_br_type)) 
                  & (0U != Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff))) 
              | ((2U == (IData)(Tile__DOT__core__DOT__ctrl_io_br_type)) 
                 & (IData)(Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt))) 
             | ((5U == (IData)(Tile__DOT__core__DOT__ctrl_io_br_type)) 
                & (~ (IData)(Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt)))) 
            | ((1U == (IData)(Tile__DOT__core__DOT__ctrl_io_br_type)) 
               & (IData)(Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu))) 
           | ((4U == (IData)(Tile__DOT__core__DOT__ctrl_io_br_type)) 
              & (~ (IData)(Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__37(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__37\n"); );
    // Init
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet;
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
        = ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd))
            ? (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_out 
               & (~ vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in))
            : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd))
                ? (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_out 
                   | vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in)
                : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd))
                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in
                    : 0U)));
    vlSelf->Tile__DOT__icache_io_cpu_resp_valid = (
                                                   ((0U 
                                                     == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                    | ((1U 
                                                        == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                       & (IData)(vlSelf->Tile__DOT__icache__DOT__hit))) 
                                                   | ((IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->Tile__DOT__icache__DOT__cpu_mask))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall 
        = (1U & ((~ (IData)(vlSelf->Tile__DOT__icache_io_cpu_resp_valid)) 
                 | (~ (IData)(vlSelf->Tile__DOT__dcache_io_cpu_resp_valid))));
    Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet 
        = (((0x13U != vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst) 
            & (((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)) 
                | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall)) 
               | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak))) 
           & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3 
        = ((IData)(Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet)
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4 
        = (((IData)(Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet) 
            & (0xffffffffU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret))
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth);
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__38(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__38\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hbad69889__0;
    VlWide<8>/*255:0*/ __Vtemp_hbad69889__1;
    // Body
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_3__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_3[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_3__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_0__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_0[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_0__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_2__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_2[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_2__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_0__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_0[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_0__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_1__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_1[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_1__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_1[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_2__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_2[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_2__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_3__v0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_3[vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_3__v0;
    }
    vlSelf->Tile__DOT__icache__DOT__rdata[0U] = ((vlSelf->Tile__DOT__icache__DOT__dataMem_0_3
                                                  [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                  << 0x18U) 
                                                 | ((vlSelf->Tile__DOT__icache__DOT__dataMem_0_2
                                                     [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                     << 0x10U) 
                                                    | ((vlSelf->Tile__DOT__icache__DOT__dataMem_0_1
                                                        [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                        << 8U) 
                                                       | vlSelf->Tile__DOT__icache__DOT__dataMem_0_0
                                                       [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0])));
    vlSelf->Tile__DOT__icache__DOT__rdata[1U] = ((vlSelf->Tile__DOT__icache__DOT__dataMem_1_3
                                                  [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                  << 0x18U) 
                                                 | ((vlSelf->Tile__DOT__icache__DOT__dataMem_1_2
                                                     [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                     << 0x10U) 
                                                    | ((vlSelf->Tile__DOT__icache__DOT__dataMem_1_1
                                                        [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                        << 8U) 
                                                       | vlSelf->Tile__DOT__icache__DOT__dataMem_1_0
                                                       [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0])));
    vlSelf->Tile__DOT__icache__DOT__rdata[2U] = (IData)(
                                                        (((QData)((IData)(
                                                                          ((vlSelf->Tile__DOT__icache__DOT__dataMem_3_3
                                                                            [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                            << 0x18U) 
                                                                           | ((vlSelf->Tile__DOT__icache__DOT__dataMem_3_2
                                                                               [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                               << 0x10U) 
                                                                              | ((vlSelf->Tile__DOT__icache__DOT__dataMem_3_1
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__icache__DOT__dataMem_3_0
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0]))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelf->Tile__DOT__icache__DOT__dataMem_2_3
                                                                             [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                             << 0x18U) 
                                                                            | ((vlSelf->Tile__DOT__icache__DOT__dataMem_2_2
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                               | ((vlSelf->Tile__DOT__icache__DOT__dataMem_2_1
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__icache__DOT__dataMem_2_0
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0])))))));
    vlSelf->Tile__DOT__icache__DOT__rdata[3U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->Tile__DOT__icache__DOT__dataMem_3_3
                                                                             [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                             << 0x18U) 
                                                                            | ((vlSelf->Tile__DOT__icache__DOT__dataMem_3_2
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                               | ((vlSelf->Tile__DOT__icache__DOT__dataMem_3_1
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__icache__DOT__dataMem_3_0
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0]))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->Tile__DOT__icache__DOT__dataMem_2_3
                                                                              [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                              << 0x18U) 
                                                                             | ((vlSelf->Tile__DOT__icache__DOT__dataMem_2_2
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                                | ((vlSelf->Tile__DOT__icache__DOT__dataMem_2_1
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__icache__DOT__dataMem_2_0
                                                                                [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0])))))) 
                                                         >> 0x20U));
    vlSelf->io_nasti_aw_bits_addr = ((vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_data 
                                      << 0xcU) | (0xff0U 
                                                  & vlSelf->Tile__DOT__dcache__DOT__addr_reg));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hbad69889__0, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[0U] = (vlSelf->Tile__DOT__dcache__DOT__d[0U] 
                                                  | __Vtemp_hbad69889__0[0U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[1U] = (vlSelf->Tile__DOT__dcache__DOT__d[1U] 
                                                  | __Vtemp_hbad69889__0[1U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[2U] = (vlSelf->Tile__DOT__dcache__DOT__d[2U] 
                                                  | __Vtemp_hbad69889__0[2U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[3U] = (vlSelf->Tile__DOT__dcache__DOT__d[3U] 
                                                  | __Vtemp_hbad69889__0[3U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[4U] = (vlSelf->Tile__DOT__dcache__DOT__d[4U] 
                                                  | __Vtemp_hbad69889__0[4U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[5U] = (vlSelf->Tile__DOT__dcache__DOT__d[5U] 
                                                  | __Vtemp_hbad69889__0[5U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[6U] = (vlSelf->Tile__DOT__dcache__DOT__d[6U] 
                                                  | __Vtemp_hbad69889__0[6U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[7U] = (vlSelf->Tile__DOT__dcache__DOT__d[7U] 
                                                  | __Vtemp_hbad69889__0[7U]);
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hbad69889__1, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[0U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[0U]) 
                                                  | __Vtemp_hbad69889__1[0U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[1U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[1U]) 
                                                  | __Vtemp_hbad69889__1[1U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[2U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[2U]) 
                                                  | __Vtemp_hbad69889__1[2U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[3U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[3U]) 
                                                  | __Vtemp_hbad69889__1[3U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[4U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[4U]) 
                                                  | __Vtemp_hbad69889__1[4U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[5U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[5U]) 
                                                  | __Vtemp_hbad69889__1[5U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[6U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[6U]) 
                                                  | __Vtemp_hbad69889__1[6U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[7U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[7U]) 
                                                  | __Vtemp_hbad69889__1[7U]);
    if (vlSelf->Tile__DOT__icache__DOT__is_alloc_reg) {
        vlSelf->Tile__DOT__icache__DOT__read[0U] = (IData)(vlSelf->Tile__DOT__icache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__icache__DOT__read[1U] = (IData)(
                                                           (vlSelf->Tile__DOT__icache__DOT__refill_buf_0 
                                                            >> 0x20U));
        vlSelf->Tile__DOT__icache__DOT__read[2U] = (IData)(vlSelf->Tile__DOT__icache__DOT__refill_buf_1);
        vlSelf->Tile__DOT__icache__DOT__read[3U] = (IData)(
                                                           (vlSelf->Tile__DOT__icache__DOT__refill_buf_1 
                                                            >> 0x20U));
    } else if (vlSelf->Tile__DOT__icache__DOT__ren_reg) {
        vlSelf->Tile__DOT__icache__DOT__read[0U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[0U];
        vlSelf->Tile__DOT__icache__DOT__read[1U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[1U];
        vlSelf->Tile__DOT__icache__DOT__read[2U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[2U];
        vlSelf->Tile__DOT__icache__DOT__read[3U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[3U];
    } else {
        vlSelf->Tile__DOT__icache__DOT__read[0U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[0U];
        vlSelf->Tile__DOT__icache__DOT__read[1U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[1U];
        vlSelf->Tile__DOT__icache__DOT__read[2U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[2U];
        vlSelf->Tile__DOT__icache__DOT__read[3U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[3U];
    }
}

VL_INLINE_OPT void VTile___024root___combo__TOP__6(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__6\n"); );
    // Body
    if (vlSelf->Tile__DOT__dcache__DOT__is_alloc) {
        vlSelf->Tile__DOT__dcache__DOT__wmask = 0xfffffU;
        vlSelf->Tile__DOT__dcache__DOT__wdata[0U] = (IData)(vlSelf->Tile__DOT__dcache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__dcache__DOT__wdata[1U] = (IData)(
                                                            (vlSelf->Tile__DOT__dcache__DOT__refill_buf_0 
                                                             >> 0x20U));
        vlSelf->Tile__DOT__dcache__DOT__wdata[2U] = (IData)(vlSelf->io_nasti_r_bits_data);
        vlSelf->Tile__DOT__dcache__DOT__wdata[3U] = (IData)(
                                                            (vlSelf->io_nasti_r_bits_data 
                                                             >> 0x20U));
    } else {
        vlSelf->Tile__DOT__dcache__DOT__wmask = (0x7ffffU 
                                                 & ((IData)(vlSelf->Tile__DOT__dcache__DOT__cpu_mask) 
                                                    << 
                                                    (0xcU 
                                                     & vlSelf->Tile__DOT__dcache__DOT__addr_reg)));
        vlSelf->Tile__DOT__dcache__DOT__wdata[0U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
        vlSelf->Tile__DOT__dcache__DOT__wdata[1U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
        vlSelf->Tile__DOT__dcache__DOT__wdata[2U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
        vlSelf->Tile__DOT__dcache__DOT__wdata[3U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
    }
    vlSelf->Tile__DOT__icache__DOT__wmask = ((IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)
                                              ? 0xfffffU
                                              : (0x7ffffU 
                                                 & ((IData)(vlSelf->Tile__DOT__icache__DOT__cpu_mask) 
                                                    << 
                                                    (0xcU 
                                                     & vlSelf->Tile__DOT__icache__DOT__addr_reg))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__39(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__39\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h04388b2a__0;
    VlWide<8>/*255:0*/ __Vtemp_h04388b2a__1;
    VlWide<8>/*255:0*/ __Vtemp_h04388b2a__2;
    // Body
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h04388b2a__0, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__icache__DOT___v_T_1[0U] = (vlSelf->Tile__DOT__icache__DOT__v[0U] 
                                                  | __Vtemp_h04388b2a__0[0U]);
    vlSelf->Tile__DOT__icache__DOT___v_T_1[1U] = (vlSelf->Tile__DOT__icache__DOT__v[1U] 
                                                  | __Vtemp_h04388b2a__0[1U]);
    vlSelf->Tile__DOT__icache__DOT___v_T_1[2U] = (vlSelf->Tile__DOT__icache__DOT__v[2U] 
                                                  | __Vtemp_h04388b2a__0[2U]);
    vlSelf->Tile__DOT__icache__DOT___v_T_1[3U] = (vlSelf->Tile__DOT__icache__DOT__v[3U] 
                                                  | __Vtemp_h04388b2a__0[3U]);
    vlSelf->Tile__DOT__icache__DOT___v_T_1[4U] = (vlSelf->Tile__DOT__icache__DOT__v[4U] 
                                                  | __Vtemp_h04388b2a__0[4U]);
    vlSelf->Tile__DOT__icache__DOT___v_T_1[5U] = (vlSelf->Tile__DOT__icache__DOT__v[5U] 
                                                  | __Vtemp_h04388b2a__0[5U]);
    vlSelf->Tile__DOT__icache__DOT___v_T_1[6U] = (vlSelf->Tile__DOT__icache__DOT__v[6U] 
                                                  | __Vtemp_h04388b2a__0[6U]);
    vlSelf->Tile__DOT__icache__DOT___v_T_1[7U] = (vlSelf->Tile__DOT__icache__DOT__v[7U] 
                                                  | __Vtemp_h04388b2a__0[7U]);
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h04388b2a__1, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__icache__DOT___d_T_2[0U] = (vlSelf->Tile__DOT__icache__DOT__d[0U] 
                                                  | __Vtemp_h04388b2a__1[0U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_2[1U] = (vlSelf->Tile__DOT__icache__DOT__d[1U] 
                                                  | __Vtemp_h04388b2a__1[1U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_2[2U] = (vlSelf->Tile__DOT__icache__DOT__d[2U] 
                                                  | __Vtemp_h04388b2a__1[2U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_2[3U] = (vlSelf->Tile__DOT__icache__DOT__d[3U] 
                                                  | __Vtemp_h04388b2a__1[3U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_2[4U] = (vlSelf->Tile__DOT__icache__DOT__d[4U] 
                                                  | __Vtemp_h04388b2a__1[4U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_2[5U] = (vlSelf->Tile__DOT__icache__DOT__d[5U] 
                                                  | __Vtemp_h04388b2a__1[5U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_2[6U] = (vlSelf->Tile__DOT__icache__DOT__d[6U] 
                                                  | __Vtemp_h04388b2a__1[6U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_2[7U] = (vlSelf->Tile__DOT__icache__DOT__d[7U] 
                                                  | __Vtemp_h04388b2a__1[7U]);
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h04388b2a__2, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__icache__DOT___d_T_4[0U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[0U]) 
                                                  | __Vtemp_h04388b2a__2[0U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_4[1U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[1U]) 
                                                  | __Vtemp_h04388b2a__2[1U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_4[2U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[2U]) 
                                                  | __Vtemp_h04388b2a__2[2U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_4[3U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[3U]) 
                                                  | __Vtemp_h04388b2a__2[3U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_4[4U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[4U]) 
                                                  | __Vtemp_h04388b2a__2[4U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_4[5U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[5U]) 
                                                  | __Vtemp_h04388b2a__2[5U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_4[6U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[6U]) 
                                                  | __Vtemp_h04388b2a__2[6U]);
    vlSelf->Tile__DOT__icache__DOT___d_T_4[7U] = ((~ 
                                                   vlSelf->Tile__DOT__icache__DOT__d[7U]) 
                                                  | __Vtemp_h04388b2a__2[7U]);
}

VL_INLINE_OPT void VTile___024root___combo__TOP__7(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__7\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT__wen = (((2U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                            & ((IData)(vlSelf->Tile__DOT__icache__DOT__hit) 
                                               | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg))) 
                                           | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__40(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__40\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT___wen_T_3 = ((2U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                & ((IData)(vlSelf->Tile__DOT__icache__DOT__hit) 
                                                   | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg)));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__8(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__8\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT___ren_T_2 = ((~ (IData)(vlSelf->Tile__DOT__icache__DOT__wen)) 
                                                & ((0U 
                                                    == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->Tile__DOT__icache__DOT__state))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__41(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__41\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_3__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_3[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_3__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_1__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_1[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_1__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_1__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_2__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_2[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_2__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_0__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_0[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_0__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_3__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_3[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_3__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_3__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_0__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_0[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_0__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_2__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_2[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_2__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_2__v0;
    }
    if (vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_0__v0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_0[vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_0__v0] 
            = vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_0__v0;
    }
}

VL_INLINE_OPT void VTile___024root___combo__TOP__9(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->Tile__DOT__arb_io_dcache_aw_ready = ((IData)(vlSelf->io_nasti_aw_ready) 
                                                 & (0U 
                                                    == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
    vlSelf->Tile__DOT__arb_io_dcache_w_ready = ((IData)(vlSelf->io_nasti_w_ready) 
                                                & (3U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__42(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__42\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT__rdata[0U] = ((vlSelf->Tile__DOT__dcache__DOT__dataMem_0_3
                                                  [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                  << 0x18U) 
                                                 | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_0_2
                                                     [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                     << 0x10U) 
                                                    | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_0_1
                                                        [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                        << 8U) 
                                                       | vlSelf->Tile__DOT__dcache__DOT__dataMem_0_0
                                                       [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0])));
    vlSelf->Tile__DOT__dcache__DOT__rdata[1U] = ((vlSelf->Tile__DOT__dcache__DOT__dataMem_1_3
                                                  [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                  << 0x18U) 
                                                 | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_1_2
                                                     [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                     << 0x10U) 
                                                    | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_1_1
                                                        [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                        << 8U) 
                                                       | vlSelf->Tile__DOT__dcache__DOT__dataMem_1_0
                                                       [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0])));
    vlSelf->Tile__DOT__dcache__DOT__rdata[2U] = (IData)(
                                                        (((QData)((IData)(
                                                                          ((vlSelf->Tile__DOT__dcache__DOT__dataMem_3_3
                                                                            [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                            << 0x18U) 
                                                                           | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_3_2
                                                                               [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                               << 0x10U) 
                                                                              | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_3_1
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__dcache__DOT__dataMem_3_0
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0]))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelf->Tile__DOT__dcache__DOT__dataMem_2_3
                                                                             [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                             << 0x18U) 
                                                                            | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_2_2
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                               | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_2_1
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__dcache__DOT__dataMem_2_0
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0])))))));
    vlSelf->Tile__DOT__dcache__DOT__rdata[3U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->Tile__DOT__dcache__DOT__dataMem_3_3
                                                                             [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                             << 0x18U) 
                                                                            | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_3_2
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                               | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_3_1
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__dcache__DOT__dataMem_3_0
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0]))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->Tile__DOT__dcache__DOT__dataMem_2_3
                                                                              [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                              << 0x18U) 
                                                                             | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_2_2
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                                | ((vlSelf->Tile__DOT__dcache__DOT__dataMem_2_1
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->Tile__DOT__dcache__DOT__dataMem_2_0
                                                                                [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0])))))) 
                                                         >> 0x20U));
    vlSelf->Tile__DOT__arb_io_nasti_r_ready = (((6U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                & (1U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state))) 
                                               | ((6U 
                                                   == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->Tile__DOT__arb__DOT__state))));
    if (vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg) {
        vlSelf->Tile__DOT__dcache__DOT__read[0U] = (IData)(vlSelf->Tile__DOT__dcache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__dcache__DOT__read[1U] = (IData)(
                                                           (vlSelf->Tile__DOT__dcache__DOT__refill_buf_0 
                                                            >> 0x20U));
        vlSelf->Tile__DOT__dcache__DOT__read[2U] = (IData)(vlSelf->Tile__DOT__dcache__DOT__refill_buf_1);
        vlSelf->Tile__DOT__dcache__DOT__read[3U] = (IData)(
                                                           (vlSelf->Tile__DOT__dcache__DOT__refill_buf_1 
                                                            >> 0x20U));
    } else if (vlSelf->Tile__DOT__dcache__DOT__ren_reg) {
        vlSelf->Tile__DOT__dcache__DOT__read[0U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata[0U];
        vlSelf->Tile__DOT__dcache__DOT__read[1U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata[1U];
        vlSelf->Tile__DOT__dcache__DOT__read[2U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata[2U];
        vlSelf->Tile__DOT__dcache__DOT__read[3U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata[3U];
    } else {
        vlSelf->Tile__DOT__dcache__DOT__read[0U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata_buf[0U];
        vlSelf->Tile__DOT__dcache__DOT__read[1U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata_buf[1U];
        vlSelf->Tile__DOT__dcache__DOT__read[2U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata_buf[2U];
        vlSelf->Tile__DOT__dcache__DOT__read[3U] = 
            vlSelf->Tile__DOT__dcache__DOT__rdata_buf[3U];
    }
    vlSelf->Tile__DOT__dcache_io_nasti_b_ready = ((0U 
                                                   != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                        & ((3U 
                                                            != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                           & (4U 
                                                              == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))))));
    vlSelf->Tile__DOT__dcache_io_nasti_w_valid = ((0U 
                                                   != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)))));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__10(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__10\n"); );
    // Body
    vlSelf->Tile__DOT__arb__DOT___GEN_3 = ((((IData)(vlSelf->Tile__DOT__arb_io_nasti_r_ready) 
                                             & (IData)(vlSelf->io_nasti_r_valid)) 
                                            & (IData)(vlSelf->io_nasti_r_bits_last))
                                            ? 0U : (IData)(vlSelf->Tile__DOT__arb__DOT__state));
    vlSelf->Tile__DOT__dcache__DOT___T_1 = ((IData)(vlSelf->Tile__DOT__arb_io_dcache_w_ready) 
                                            & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_w_valid));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__43(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__43\n"); );
    // Body
    vlSelf->io_nasti_r_ready = vlSelf->Tile__DOT__arb_io_nasti_r_ready;
    vlSelf->io_nasti_w_valid = ((IData)(vlSelf->Tile__DOT__dcache_io_nasti_w_valid) 
                                & (3U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
    vlSelf->io_nasti_w_bits_data = ((IData)(vlSelf->Tile__DOT__dcache__DOT__write_count)
                                     ? (((QData)((IData)(
                                                         vlSelf->Tile__DOT__dcache__DOT__read[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Tile__DOT__dcache__DOT__read[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->Tile__DOT__dcache__DOT__read[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Tile__DOT__dcache__DOT__read[0U]))));
    vlSelf->Tile__DOT__dcache_io_cpu_resp_bits_data 
        = ((3U == (3U & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                         >> 2U))) ? vlSelf->Tile__DOT__dcache__DOT__read[3U]
            : ((2U == (3U & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                             >> 2U))) ? vlSelf->Tile__DOT__dcache__DOT__read[2U]
                : ((1U == (3U & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                                 >> 2U))) ? vlSelf->Tile__DOT__dcache__DOT__read[1U]
                    : vlSelf->Tile__DOT__dcache__DOT__read[0U])));
    vlSelf->Tile__DOT__arb_io_nasti_b_ready = ((IData)(vlSelf->Tile__DOT__dcache_io_nasti_b_ready) 
                                               & (4U 
                                                  == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__11(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__11\n"); );
    // Body
    vlSelf->Tile__DOT__dcache_io_nasti_w_bits_last 
        = ((IData)(vlSelf->Tile__DOT__dcache__DOT___T_1) 
           & (IData)(vlSelf->Tile__DOT__dcache__DOT__write_count));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__44(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__44\n"); );
    // Body
    vlSelf->io_nasti_b_ready = vlSelf->Tile__DOT__arb_io_nasti_b_ready;
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift 
        = ((0x1fU >= ((0x10U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                                << 3U)) | (8U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                                                 << 3U))))
            ? (vlSelf->Tile__DOT__dcache_io_cpu_resp_bits_data 
               >> ((0x10U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                             << 3U)) | (8U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                                              << 3U))))
            : 0U);
}

VL_INLINE_OPT void VTile___024root___combo__TOP__12(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__12\n"); );
    // Body
    vlSelf->io_nasti_w_bits_last = vlSelf->Tile__DOT__dcache_io_nasti_w_bits_last;
    vlSelf->Tile__DOT__arb__DOT___GEN_8 = ((3U == (IData)(vlSelf->Tile__DOT__arb__DOT__state))
                                            ? ((((IData)(vlSelf->Tile__DOT__arb_io_dcache_w_ready) 
                                                 & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_w_valid)) 
                                                & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_w_bits_last))
                                                ? 4U
                                                : (IData)(vlSelf->Tile__DOT__arb__DOT__state))
                                            : ((4U 
                                                == (IData)(vlSelf->Tile__DOT__arb__DOT__state))
                                                ? (
                                                   ((IData)(vlSelf->Tile__DOT__arb_io_nasti_b_ready) 
                                                    & (IData)(vlSelf->io_nasti_b_valid))
                                                    ? 0U
                                                    : (IData)(vlSelf->Tile__DOT__arb__DOT__state))
                                                : (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
    vlSelf->Tile__DOT__dcache__DOT__wen = ((((2U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                             & ((IData)(vlSelf->Tile__DOT__dcache__DOT__hit) 
                                                | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg))) 
                                            & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))) 
                                           | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__45(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__45\n"); );
    // Body
    vlSelf->Tile__DOT__dcache_io_nasti_ar_valid = (
                                                   (0U 
                                                    != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                       ? 
                                                      ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__hit)) 
                                                       & (~ (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty)))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                        ? 
                                                       ((~ 
                                                         ((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T) 
                                                          | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))) 
                                                        & (~ (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty)))
                                                        : 
                                                       ((3U 
                                                         != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                           & (5U 
                                                              == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)))))));
    vlSelf->Tile__DOT__dcache_io_nasti_aw_valid = (
                                                   (0U 
                                                    != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                       ? 
                                                      ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__hit)) 
                                                       & (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                       & ((~ 
                                                           ((IData)(vlSelf->Tile__DOT__dcache__DOT___wen_T) 
                                                            | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))) 
                                                          & (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty)))));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__13(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__13\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___ren_T_2 = ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__wen)) 
                                                & ((0U 
                                                    == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__46(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__46\n"); );
    // Body
    vlSelf->io_nasti_ar_bits_addr = ((IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid)
                                      ? (0xfffffff0U 
                                         & vlSelf->Tile__DOT__dcache__DOT__addr_reg)
                                      : (0xfffffff0U 
                                         & vlSelf->Tile__DOT__icache__DOT__addr_reg));
    vlSelf->Tile__DOT__arb_io_nasti_aw_valid = ((IData)(vlSelf->Tile__DOT__dcache_io_nasti_aw_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__14(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__14\n"); );
    // Body
    vlSelf->Tile__DOT__arb_io_dcache_ar_ready = (((IData)(vlSelf->io_nasti_ar_ready) 
                                                  & (~ (IData)(vlSelf->Tile__DOT__arb_io_nasti_aw_valid))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__47(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__47\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h127fcdb0__0;
    // Body
    vlSelf->io_nasti_aw_valid = vlSelf->Tile__DOT__arb_io_nasti_aw_valid;
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h127fcdb0__0, vlSelf->Tile__DOT__icache__DOT__d, 
                  (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__icache__DOT__is_dirty = (1U 
                                                & (vlSelf->Tile__DOT__icache__DOT___hit_T[0U] 
                                                   & __Vtemp_h127fcdb0__0[0U]));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__15(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__15\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___GEN_107 = (((IData)(vlSelf->Tile__DOT__arb_io_dcache_ar_ready) 
                                                 & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid))
                                                 ? 6U
                                                 : (IData)(vlSelf->Tile__DOT__dcache__DOT__state));
    vlSelf->Tile__DOT__arb_io_icache_ar_ready = ((IData)(vlSelf->Tile__DOT__arb_io_dcache_ar_ready) 
                                                 & (~ (IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid)));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__48(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__48\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT___wen_T = ((IData)(vlSelf->Tile__DOT__icache__DOT__hit) 
                                              | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__16(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__16\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___GEN_108 = (((IData)(vlSelf->Tile__DOT__arb_io_dcache_aw_ready) 
                                                 & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_aw_valid))
                                                 ? 3U
                                                 : (IData)(vlSelf->Tile__DOT__dcache__DOT___GEN_107));
    vlSelf->Tile__DOT__dcache__DOT___GEN_128 = ((3U 
                                                 == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                 ? 
                                                (((IData)(vlSelf->Tile__DOT__dcache__DOT___T_1) 
                                                  & (IData)(vlSelf->Tile__DOT__dcache__DOT__write_count))
                                                  ? 4U
                                                  : (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                  ? 
                                                 (((IData)(vlSelf->Tile__DOT__dcache_io_nasti_b_ready) 
                                                   & ((IData)(vlSelf->io_nasti_b_valid) 
                                                      & (4U 
                                                         == (IData)(vlSelf->Tile__DOT__arb__DOT__state))))
                                                   ? 5U
                                                   : (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                   ? (IData)(vlSelf->Tile__DOT__dcache__DOT___GEN_107)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->Tile__DOT__dcache__DOT__read_wrap_out)
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->Tile__DOT__dcache__DOT__cpu_mask))
                                                      ? 2U
                                                      : 0U)
                                                     : (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                                                    : (IData)(vlSelf->Tile__DOT__dcache__DOT__state)))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__49(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__49\n"); );
    // Body
    vlSelf->Tile__DOT__icache_io_nasti_ar_valid = (
                                                   (0U 
                                                    != (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                                       ? 
                                                      ((~ (IData)(vlSelf->Tile__DOT__icache__DOT__hit)) 
                                                       & (~ (IData)(vlSelf->Tile__DOT__icache__DOT__is_dirty)))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                                        ? 
                                                       ((~ (IData)(vlSelf->Tile__DOT__icache__DOT___wen_T)) 
                                                        & (~ (IData)(vlSelf->Tile__DOT__icache__DOT__is_dirty)))
                                                        : 
                                                       ((3U 
                                                         != (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                           & (5U 
                                                              == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))))));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__17(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__17\n"); );
    // Body
    if (((IData)(vlSelf->Tile__DOT__arb_io_icache_ar_ready) 
         & (IData)(vlSelf->Tile__DOT__icache_io_nasti_ar_valid))) {
        vlSelf->Tile__DOT__arb__DOT___GEN_0 = 1U;
        vlSelf->Tile__DOT__icache__DOT___GEN_107 = 6U;
    } else {
        vlSelf->Tile__DOT__arb__DOT___GEN_0 = vlSelf->Tile__DOT__arb__DOT__state;
        vlSelf->Tile__DOT__icache__DOT___GEN_107 = vlSelf->Tile__DOT__icache__DOT__state;
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__50(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__50\n"); );
    // Body
    vlSelf->io_nasti_ar_valid = ((((IData)(vlSelf->Tile__DOT__icache_io_nasti_ar_valid) 
                                   | (IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid)) 
                                  & (~ (IData)(vlSelf->Tile__DOT__arb_io_nasti_aw_valid))) 
                                 & (0U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__18(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__18\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT___GEN_128 = ((3U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                                 ? (IData)(vlSelf->Tile__DOT__icache__DOT__state)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                                  ? (IData)(vlSelf->Tile__DOT__icache__DOT__state)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                                   ? (IData)(vlSelf->Tile__DOT__icache__DOT___GEN_107)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->Tile__DOT__icache__DOT__read_wrap_out)
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->Tile__DOT__icache__DOT__cpu_mask))
                                                      ? 2U
                                                      : 0U)
                                                     : (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                                    : (IData)(vlSelf->Tile__DOT__icache__DOT__state)))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__51(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__51\n"); );
    // Init
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110;
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
        = ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch
            : ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch
                : ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch
                    : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch
                        : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch
                            : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch
                                : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                    : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch)))))));
    Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
        = ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
            : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? ((IData)(1U) 
                                         + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? ((IData)(1U) 
                                             + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                    : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? ((IData)(1U) 
                                                 + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                        : ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? 
                           ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                            : ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                                : ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? ((IData)(1U) 
                                       + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                                    : ((0x780U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? ((IData)(1U) 
                                           + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                                        : ((0x781U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? ((IData)(1U) 
                                               + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                                            : ((0x900U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? ((IData)(1U) 
                                                   + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
                                                : (
                                                   (0x901U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                    : 
                                                   ((IData)(1U) 
                                                    + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_))))))))))));
    if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
        if ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                        >> 0x14U))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
        } else if ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
        } else if ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                         >> 7U));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                         >> 3U));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
        } else {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                = Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110;
        }
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_96 
        = ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
            : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                : ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                    : ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                        : ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                            : ((0x780U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                                : ((0x781U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                                    : ((0x900U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                                        : ((0x901U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                                            : ((0x902U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                                                : (
                                                   (0x980U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                                                    : 
                                                   ((0x981U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4
                                                     : 
                                                    ((0x982U 
                                                      == 
                                                      (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                      : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4)))))))))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_135 
        = ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
            : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                    : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                        : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                            : ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                                : ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                                    : ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                                        : ((0x780U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                                            : ((0x781U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                                                : (
                                                   (0x900U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                                                    : 
                                                   ((0x901U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3
                                                     : 
                                                    ((0x902U 
                                                      == 
                                                      (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                      : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3)))))))))))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__52(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__52\n"); );
    // Body
    if ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                    >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = (0x8000000fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata);
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr);
    }
    if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
        if ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                        >> 0x14U))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_176 
                = (3U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                         >> 4U));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_178 
                = (3U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                         >> 1U));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_179 
                = (1U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata);
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
        } else {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_176 
                = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_178 
                = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_179 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
                = ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                    : ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                        : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                            : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                                : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                                    : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                                        : ((0x341U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                                            : ((0x342U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                                                : (
                                                   (0x343U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost
                                                    : 
                                                   ((0x780U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                     : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost))))))))));
        }
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_176 
            = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_178 
            = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_179 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_200 
        = (1U & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret) 
                 | ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
                     ? ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                    >> 0x14U)) ? (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                                                  >> 3U)
                         : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1))
                     : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1))));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__53(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__53\n"); );
    // Init
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134;
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_97 
        = ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
            : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                    : ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                        : ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                            : ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                                : ((0x780U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                                    : ((0x781U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                                        : ((0x900U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                                            : ((0x901U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                                                : (
                                                   (0x902U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                                                    : 
                                                   ((0x980U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1
                                                     : 
                                                    ((0x981U 
                                                      == 
                                                      (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                      : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1)))))))))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
        = ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
            : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                    : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                        : ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                            : ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                                : ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                                    : ((0x780U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                                        : ((0x781U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                                            : ((0x900U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                                                : (
                                                   (0x901U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                                                    : 
                                                   ((0x902U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                                                     : 
                                                    ((0x980U 
                                                      == 
                                                      (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                      : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2)))))))))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
        = ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp
            : ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp
                : ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp
                    : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp
                        : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp
                            : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp))))));
    Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134 
        = ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                       >> 0x14U)) ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
            : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? ((IData)(1U) 
                                         + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                : ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? ((IData)(1U) 
                                             + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                    : ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                   >> 0x14U)) ? ((IData)(1U) 
                                                 + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                        : ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? 
                           ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                            : ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                                : ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? ((IData)(1U) 
                                       + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                                    : ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? ((IData)(1U) 
                                           + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                                        : ((0x780U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? ((IData)(1U) 
                                               + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                                            : ((0x781U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? ((IData)(1U) 
                                                   + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                                                : (
                                                   (0x900U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                                                    : 
                                                   ((IData)(1U) 
                                                    + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle))))))))))));
    if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
        if ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                        >> 0x14U))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_193 
                = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle);
        } else if ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
                = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                         >> 7U));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
                = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                         >> 3U));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_193 
                = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle);
        } else {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_193 
                = Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134;
        }
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_193 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle);
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__54(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__54\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___wen_T_3 = (((2U 
                                                  == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                 & ((IData)(vlSelf->Tile__DOT__dcache__DOT__hit) 
                                                    | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg))) 
                                                & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)));
}

VL_INLINE_OPT void VTile___024root___combo__TOP__19(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___combo__TOP__19\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___GEN_31 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)
                                             ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc))
                                             : vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc));
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__55(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__55\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath_io_dcache_req_valid 
        = ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
           & ((0U != (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type)) 
              | (0U != (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type))));
    if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_239 
            = (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type;
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_239 
            = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)
                ? (QData)((IData)((0xfffffffcU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc)))
                : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret)
                    ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                    : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
                        ? ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                       >> 0x14U)) ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                            : ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                           >> 0x14U))
                                ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                                : ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                               >> 0x14U))
                                    ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                                    : ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                   >> 0x14U))
                                        ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                                        : ((0x741U 
                                            == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                >> 0x14U))
                                            ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                                            : ((0x321U 
                                                == 
                                                (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                 >> 0x14U))
                                                ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                                                : (
                                                   (0x340U 
                                                    == 
                                                    (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                     >> 0x14U))
                                                    ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                                      >> 0x14U))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                                                                      >> 2U))) 
                                                     << 2U)
                                                     : (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))))))))))
                        : (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc)))));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T 
            = vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type;
    }
}

VL_INLINE_OPT void VTile___024root___sequent__TOP__56(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___sequent__TOP__56\n"); );
    // Init
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___sum_T_3;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_9;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_19;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_29;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_39;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_8;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_18;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_28;
    SData/*12:0*/ Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_7;
    // Body
    vlSelf->Tile__DOT__core__DOT__ctrl_io_inst_kill 
        = ((0x37U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
           & ((0x17U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
              & ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                 | ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                    | ((0x63U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                       & ((0x1063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                          & ((0x4063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                             & ((0x5063U != (0x707fU 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                & ((0x6063U != (0x707fU 
                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                   & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_425))))))))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
        = (((0x37U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
            & ((0x17U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
               & ((0x6fU != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                  & ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                     | ((0x63U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                        & ((0x1063U != (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                           & ((0x4063U != (0x707fU 
                                           & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                              & ((0x5063U != (0x707fU 
                                              & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                 & ((0x6063U != (0x707fU 
                                                 & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
                                    & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_185))))))))))
            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc);
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_9 
        = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
            >> 0x10U) | (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
                         << 0x10U));
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_19 
        = ((0xff00ffU & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_9 
                         >> 8U)) | (0xff00ff00U & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_9 
                                                   << 8U)));
    Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_7 
        = ((5U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel))
            ? ((0x1000U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                           >> 0x13U)) | ((0x800U & 
                                          (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                  >> 7U)))))
            : ((0x1000U & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_5) 
                           << 1U)) | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_5)));
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_29 
        = ((0xf0f0f0fU & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_19 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_19 
                                      << 4U)));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen_io_out 
        = ((6U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel))
            ? (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                        >> 0xfU)) : ((4U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT__Jimm 
                                                         >> 0x14U)))) 
                                          << 0x15U) 
                                         | vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT__Jimm)
                                      : ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel))
                                          ? (0xfffff000U 
                                             & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                          : (((- (IData)(
                                                         (1U 
                                                          & ((IData)(Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_7) 
                                                             >> 0xcU)))) 
                                              << 0xdU) 
                                             | (IData)(Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_7)))));
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_39 
        = ((0x33333333U & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_29 
                           >> 2U)) | (0xccccccccU & 
                                      (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_29 
                                       << 2U)));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B 
        = (((0x37U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
            & ((0x17U != (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) 
               & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_240)))
            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen_io_out);
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___sum_T_3 
        = ((1U & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
            ? (- vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B);
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin 
        = ((8U & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op))
            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A
            : ((0x55555555U & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_39 
                               >> 1U)) | (0xaaaaaaaaU 
                                          & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_39 
                                             << 1U))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum 
        = (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
           + Tile__DOT__core__DOT__dpath__DOT__alu__DOT___sum_T_3);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftr_T_5 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op) 
                                                              & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(Tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin))), 
                                           (0x1fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B)));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T_10 
        = (0x1fU & ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T))
                     ? (0xfU & ((IData)(1U) << (3U 
                                                & vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum)))
                     : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T))
                         ? ((IData)(3U) << (3U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum))
                         : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T))
                             ? 0xfU : 0U))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___next_pc_T_9 
        = (0x1ffffffffULL & (((1U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel)) 
                              | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond_io_taken))
                              ? ((QData)((IData)((vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum 
                                                  >> 1U))) 
                                 << 1U) : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc
                                            : (4ULL 
                                               + vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc))));
    if (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT___daddr_T 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__next_pc 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc;
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT___daddr_T 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__next_pc 
            = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)
                ? (QData)((IData)(((IData)(0x100U) 
                                   + ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV) 
                                      << 6U)))) : (
                                                   (3U 
                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel))
                                                    ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc))
                                                    : vlSelf->Tile__DOT__core__DOT__dpath__DOT___next_pc_T_9));
    }
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_8 
        = ((0xffffU & (IData)((vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftr_T_5 
                               >> 0x10U))) | ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftr_T_5) 
                                              << 0x10U));
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_18 
        = ((0xff00ffU & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_8 
                         >> 8U)) | (0xff00ff00U & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_8 
                                                   << 8U)));
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_28 
        = ((0xf0f0f0fU & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_18 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_18 
                                      << 4U)));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_38 
        = ((0x33333333U & (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_28 
                           >> 2U)) | (0xccccccccU & 
                                      (Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_28 
                                       << 2U)));
}

#ifdef VL_DEBUG
void VTile___024root___eval_debug_assertions(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_host_fromhost_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_host_fromhost_valid");}
    if (VL_UNLIKELY((vlSelf->io_nasti_aw_ready & 0xfeU))) {
        Verilated::overWidthError("io_nasti_aw_ready");}
    if (VL_UNLIKELY((vlSelf->io_nasti_w_ready & 0xfeU))) {
        Verilated::overWidthError("io_nasti_w_ready");}
    if (VL_UNLIKELY((vlSelf->io_nasti_b_valid & 0xfeU))) {
        Verilated::overWidthError("io_nasti_b_valid");}
    if (VL_UNLIKELY((vlSelf->io_nasti_b_bits_id & 0xe0U))) {
        Verilated::overWidthError("io_nasti_b_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_nasti_b_bits_resp & 0xfcU))) {
        Verilated::overWidthError("io_nasti_b_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_nasti_ar_ready & 0xfeU))) {
        Verilated::overWidthError("io_nasti_ar_ready");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_valid & 0xfeU))) {
        Verilated::overWidthError("io_nasti_r_valid");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_bits_id & 0xe0U))) {
        Verilated::overWidthError("io_nasti_r_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_bits_resp & 0xfcU))) {
        Verilated::overWidthError("io_nasti_r_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_bits_last & 0xfeU))) {
        Verilated::overWidthError("io_nasti_r_bits_last");}
}
#endif  // VL_DEBUG
