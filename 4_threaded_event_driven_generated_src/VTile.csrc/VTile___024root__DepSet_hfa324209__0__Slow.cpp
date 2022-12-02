// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTile.h for the primary calling header

#include "verilated.h"

#include "VTile___024root.h"

VL_ATTR_COLD void VTile___024root___initial__TOP__0(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->io_nasti_aw_bits_id = 0U;
    vlSelf->io_nasti_aw_bits_len = 1U;
    vlSelf->io_nasti_aw_bits_size = 3U;
    vlSelf->io_nasti_aw_bits_burst = 1U;
    vlSelf->io_nasti_aw_bits_lock = 0U;
    vlSelf->io_nasti_aw_bits_cache = 0U;
    vlSelf->io_nasti_aw_bits_prot = 0U;
    vlSelf->io_nasti_aw_bits_qos = 0U;
    vlSelf->io_nasti_w_bits_strb = 0xffU;
    vlSelf->io_nasti_ar_bits_id = 0U;
    vlSelf->io_nasti_ar_bits_len = 1U;
    vlSelf->io_nasti_ar_bits_size = 3U;
    vlSelf->io_nasti_ar_bits_burst = 1U;
    vlSelf->io_nasti_ar_bits_lock = 0U;
    vlSelf->io_nasti_ar_bits_cache = 0U;
    vlSelf->io_nasti_ar_bits_prot = 0U;
    vlSelf->io_nasti_ar_bits_qos = 0U;
}

extern const VlWide<8>/*255:0*/ VTile__ConstPool__CONST_h4e9f510d_0;

VL_ATTR_COLD void VTile___024root___settle__TOP__0(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl_io_br_type;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata1;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata2;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__rs1hazard;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__rs2hazard;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_68;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_T_80;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110;
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134;
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
    IData/*31:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__isSameSign;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt;
    CData/*0:0*/ Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144;
    CData/*0:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_223;
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_260;
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_275;
    CData/*3:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_311;
    CData/*3:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_326;
    CData/*0:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_405;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_479;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546;
    CData/*1:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561;
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642;
    CData/*2:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657;
    CData/*0:0*/ Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_692;
    VlWide<8>/*255:0*/ __Vtemp_hbad69889__0;
    VlWide<8>/*255:0*/ __Vtemp_hbad69889__1;
    VlWide<8>/*255:0*/ __Vtemp_hbad69889__2;
    VlWide<8>/*255:0*/ __Vtemp_he7bdef52__0;
    VlWide<8>/*255:0*/ __Vtemp_h6b478f06__0;
    VlWide<8>/*255:0*/ __Vtemp_h04388b2a__0;
    VlWide<8>/*255:0*/ __Vtemp_h04388b2a__1;
    VlWide<8>/*255:0*/ __Vtemp_h04388b2a__2;
    VlWide<8>/*255:0*/ __Vtemp_h2ac3c255__0;
    VlWide<8>/*255:0*/ __Vtemp_h127fcdb0__0;
    // Body
    vlSelf->io_host_tohost = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___time_T_1 
        = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___cycle_T_1 
        = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0 
        = ((IData)(vlSelf->io_host_fromhost_valid) ? vlSelf->io_host_fromhost_bits
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mfromhost);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1 
        = ((0xffffffffU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_)
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2 
        = ((0xffffffffU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh);
    vlSelf->Tile__DOT__arb_io_dcache_aw_ready = ((IData)(vlSelf->io_nasti_aw_ready) 
                                                 & (0U 
                                                    == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
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
    vlSelf->Tile__DOT__arb_io_dcache_w_ready = ((IData)(vlSelf->io_nasti_w_ready) 
                                                & (3U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
    vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_data 
        = vlSelf->Tile__DOT__icache__DOT__metaMem_tag
        [vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0];
    vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_data 
        = vlSelf->Tile__DOT__dcache__DOT__metaMem_tag
        [vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0];
    vlSelf->io_nasti_aw_bits_addr = ((vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_data 
                                      << 0xcU) | (0xff0U 
                                                  & vlSelf->Tile__DOT__dcache__DOT__addr_reg));
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
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hbad69889__1, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[0U] = (vlSelf->Tile__DOT__dcache__DOT__d[0U] 
                                                  | __Vtemp_hbad69889__1[0U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[1U] = (vlSelf->Tile__DOT__dcache__DOT__d[1U] 
                                                  | __Vtemp_hbad69889__1[1U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[2U] = (vlSelf->Tile__DOT__dcache__DOT__d[2U] 
                                                  | __Vtemp_hbad69889__1[2U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[3U] = (vlSelf->Tile__DOT__dcache__DOT__d[3U] 
                                                  | __Vtemp_hbad69889__1[3U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[4U] = (vlSelf->Tile__DOT__dcache__DOT__d[4U] 
                                                  | __Vtemp_hbad69889__1[4U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[5U] = (vlSelf->Tile__DOT__dcache__DOT__d[5U] 
                                                  | __Vtemp_hbad69889__1[5U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[6U] = (vlSelf->Tile__DOT__dcache__DOT__d[6U] 
                                                  | __Vtemp_hbad69889__1[6U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_2[7U] = (vlSelf->Tile__DOT__dcache__DOT__d[7U] 
                                                  | __Vtemp_hbad69889__1[7U]);
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hbad69889__2, VTile__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[0U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[0U]) 
                                                  | __Vtemp_hbad69889__2[0U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[1U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[1U]) 
                                                  | __Vtemp_hbad69889__2[1U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[2U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[2U]) 
                                                  | __Vtemp_hbad69889__2[2U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[3U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[3U]) 
                                                  | __Vtemp_hbad69889__2[3U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[4U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[4U]) 
                                                  | __Vtemp_hbad69889__2[4U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[5U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[5U]) 
                                                  | __Vtemp_hbad69889__2[5U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[6U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[6U]) 
                                                  | __Vtemp_hbad69889__2[6U]);
    vlSelf->Tile__DOT__dcache__DOT___d_T_4[7U] = ((~ 
                                                   vlSelf->Tile__DOT__dcache__DOT__d[7U]) 
                                                  | __Vtemp_hbad69889__2[7U]);
    vlSelf->Tile__DOT__arb_io_nasti_r_ready = (((6U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                & (1U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state))) 
                                               | ((6U 
                                                   == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->Tile__DOT__arb__DOT__state))));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret 
        = (IData)(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd)) 
                   & (0x10000000U == (0x10100000U & vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst))));
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
    vlSelf->Tile__DOT__icache__DOT___T = ((6U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                          & ((IData)(vlSelf->io_nasti_r_valid) 
                                             & (1U 
                                                == (IData)(vlSelf->Tile__DOT__arb__DOT__state))));
    vlSelf->Tile__DOT__dcache__DOT___T = ((6U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                          & ((IData)(vlSelf->io_nasti_r_valid) 
                                             & (2U 
                                                == (IData)(vlSelf->Tile__DOT__arb__DOT__state))));
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
    vlSelf->Tile__DOT__arb__DOT___GEN_3 = ((((IData)(vlSelf->Tile__DOT__arb_io_nasti_r_ready) 
                                             & (IData)(vlSelf->io_nasti_r_valid)) 
                                            & (IData)(vlSelf->io_nasti_r_bits_last))
                                            ? 0U : (IData)(vlSelf->Tile__DOT__arb__DOT__state));
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
    vlSelf->Tile__DOT__dcache__DOT___T_1 = ((IData)(vlSelf->Tile__DOT__arb_io_dcache_w_ready) 
                                            & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_w_valid));
    vlSelf->Tile__DOT__icache__DOT__read_wrap_out = 
        ((IData)(vlSelf->Tile__DOT__icache__DOT___T) 
         & (IData)(vlSelf->Tile__DOT__icache__DOT__read_count));
    vlSelf->Tile__DOT__dcache__DOT__read_wrap_out = 
        ((IData)(vlSelf->Tile__DOT__dcache__DOT___T) 
         & (IData)(vlSelf->Tile__DOT__dcache__DOT__read_count));
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
    vlSelf->io_nasti_b_ready = vlSelf->Tile__DOT__arb_io_nasti_b_ready;
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
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift 
        = ((0x1fU >= ((0x10U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                                << 3U)) | (8U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                                                 << 3U))))
            ? (vlSelf->Tile__DOT__dcache_io_cpu_resp_bits_data 
               >> ((0x10U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                             << 3U)) | (8U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu 
                                              << 3U))))
            : 0U);
    vlSelf->Tile__DOT__dcache__DOT___wen_T_3 = (((2U 
                                                  == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                 & ((IData)(vlSelf->Tile__DOT__dcache__DOT__hit) 
                                                    | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg))) 
                                                & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)));
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
    vlSelf->Tile__DOT__dcache_io_nasti_w_bits_last 
        = ((IData)(vlSelf->Tile__DOT__dcache__DOT___T_1) 
           & (IData)(vlSelf->Tile__DOT__dcache__DOT__write_count));
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
    if ((0x4033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0xfU == (0xf00fffffU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0x100fU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 2U;
    } else if ((0x1073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 1U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 2U;
    } else if ((0x2073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 2U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 2U;
    } else if ((0x3073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 2U;
    } else if ((0x5073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 1U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 2U;
    } else if ((0x6073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 2U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 2U;
    } else if ((0x7073U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 2U;
    } else if ((0x73U == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 4U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0x100073U == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 4U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    } else if ((0x10000073U == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 3U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 4U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 3U;
    } else {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114 = 0U;
    }
    vlSelf->Tile__DOT__icache__DOT__is_alloc = ((6U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                & (IData)(vlSelf->Tile__DOT__icache__DOT__read_wrap_out));
    vlSelf->Tile__DOT__dcache__DOT__is_alloc = ((6U 
                                                 == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                & (IData)(vlSelf->Tile__DOT__dcache__DOT__read_wrap_out));
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
    vlSelf->Tile__DOT__dcache__DOT___wen_T = ((IData)(vlSelf->Tile__DOT__dcache__DOT__hit) 
                                              | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg));
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
    vlSelf->io_nasti_w_bits_last = vlSelf->Tile__DOT__dcache_io_nasti_w_bits_last;
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
    if (vlSelf->Tile__DOT__icache__DOT__is_alloc) {
        vlSelf->Tile__DOT__icache__DOT__wdata[0U] = (IData)(vlSelf->Tile__DOT__icache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__icache__DOT__wdata[1U] = (IData)(
                                                            (vlSelf->Tile__DOT__icache__DOT__refill_buf_0 
                                                             >> 0x20U));
        vlSelf->Tile__DOT__icache__DOT__wdata[2U] = (IData)(vlSelf->io_nasti_r_bits_data);
        vlSelf->Tile__DOT__icache__DOT__wdata[3U] = (IData)(
                                                            (vlSelf->io_nasti_r_bits_data 
                                                             >> 0x20U));
        vlSelf->Tile__DOT__icache__DOT__wmask = 0xfffffU;
    } else {
        vlSelf->Tile__DOT__icache__DOT__wdata[0U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[1U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[2U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[3U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wmask = (0x7ffffU 
                                                 & ((IData)(vlSelf->Tile__DOT__icache__DOT__cpu_mask) 
                                                    << 
                                                    (0xcU 
                                                     & vlSelf->Tile__DOT__icache__DOT__addr_reg)));
    }
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
    if ((0x2023U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x13U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x2013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x3013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x4013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x6013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x7013U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x1013U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x5013U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x40005013U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 = 0U;
    } else {
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_546;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_642;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_114;
    }
    vlSelf->Tile__DOT__dcache__DOT__wen = ((((2U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                             & ((IData)(vlSelf->Tile__DOT__dcache__DOT__hit) 
                                                | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg))) 
                                            & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt))) 
                                           | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc));
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
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2 = 
        (((0U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)) 
          & (IData)(Tile__DOT__core__DOT__dpath__DOT__rs2hazard))
          ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu
          : Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 = 
        (((0U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)) 
          & (IData)(Tile__DOT__core__DOT__dpath__DOT__rs1hazard))
          ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu
          : Tile__DOT__core__DOT__dpath__DOT__regFile_io_rdata1);
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
    if ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 2U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 1U;
    } else if ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 2U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 1U;
    } else if ((0x63U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else if ((0x1063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else if ((0x4063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else if ((0x5063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else if ((0x6063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else if ((0x7063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else if ((3U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 2U;
    } else if ((0x1003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 2U;
    } else if ((0x2003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 2U;
    } else if ((0x4003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 2U;
    } else if ((0x5003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 1U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 2U;
    } else if ((0x23U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else if ((0x1023U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = 0U;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 = 0U;
    } else {
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_561;
        vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_657;
        Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_129;
    }
    if ((0x37U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
        Tile__DOT__core__DOT__ctrl_io_br_type = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0xbU;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 3U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
        Tile__DOT__core__DOT__ctrl_io_br_type = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 3U;
        vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel = 0U;
    } else {
        if ((0x6fU == (0x7fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
            vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
            Tile__DOT__core__DOT__ctrl_io_br_type = 0U;
            vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type = 0U;
            vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
            vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 4U;
        } else {
            if ((0x67U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                Tile__DOT__core__DOT__ctrl_io_br_type = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 1U;
            } else if ((0x63U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                Tile__DOT__core__DOT__ctrl_io_br_type = 3U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 5U;
            } else if ((0x1063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                Tile__DOT__core__DOT__ctrl_io_br_type = 6U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 5U;
            } else if ((0x4063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                Tile__DOT__core__DOT__ctrl_io_br_type = 2U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 5U;
            } else if ((0x5063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                Tile__DOT__core__DOT__ctrl_io_br_type = 5U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 5U;
            } else if ((0x6063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                Tile__DOT__core__DOT__ctrl_io_br_type = 1U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 5U;
            } else if ((0x7063U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                Tile__DOT__core__DOT__ctrl_io_br_type = 4U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 5U;
            } else {
                if ((3U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                    vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 3U;
                    vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                    vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 1U;
                } else if ((0x1003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                    vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 2U;
                    vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = 0U;
                    vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 1U;
                } else {
                    if ((0x2003U == (0x707fU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 1U;
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 1U;
                    } else if ((0x4003U == (0x707fU 
                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 5U;
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 1U;
                    } else if ((0x5003U == (0x707fU 
                                            & vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))) {
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 4U;
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = 1U;
                    } else {
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = 0U;
                        vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel 
                            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_275;
                    }
                    vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op 
                        = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_326;
                }
                Tile__DOT__core__DOT__ctrl_io_br_type = 0U;
            }
            vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type 
                = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_479;
        }
        vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel 
            = Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_144;
    }
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
    vlSelf->Tile__DOT__dcache__DOT___ren_T_2 = ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__wen)) 
                                                & ((0U 
                                                    == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))));
    vlSelf->io_nasti_ar_bits_addr = ((IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid)
                                      ? (0xfffffff0U 
                                         & vlSelf->Tile__DOT__dcache__DOT__addr_reg)
                                      : (0xfffffff0U 
                                         & vlSelf->Tile__DOT__icache__DOT__addr_reg));
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
    if ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                    >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
    } else if ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x342U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x343U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x780U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x781U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x900U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    } else if ((0x901U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2;
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
            = ((0x902U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2
                : ((0x980U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata
                    : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2));
        Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    }
    if ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                    >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x741U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else if ((0x321U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U))) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp;
        if ((0x340U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                        >> 0x14U))) {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr;
        } else {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch;
            if ((0x341U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
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
        }
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_200 
        = (1U & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret) 
                 | ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
                     ? ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                    >> 0x14U)) ? (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                                                  >> 3U)
                         : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1))
                     : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1))));
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
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
                = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
        } else {
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_176 
                = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_178 
                = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV));
            vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_179 
                = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE));
            if ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                            >> 0x14U))) {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
                    = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                             >> 7U));
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
                    = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                             >> 3U));
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                    = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                    = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
                    = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                    = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
            } else {
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
                    = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
                vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
                    = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
                if ((0x304U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                >> 0x14U))) {
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                        = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                                 >> 7U));
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                        = (1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
                                 >> 3U));
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
                        = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                        = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
                } else {
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
                        = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
                        = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
                        = ((0x701U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
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
                                                     : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost))))))));
                    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
                        = Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110;
                }
            }
        }
    } else {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_176 
            = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_178 
            = (3U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_179 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 
            = (1U & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 
            = vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost;
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 
            = ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_);
    }
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
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_193 
        = ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
            ? ((0x300U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                           >> 0x14U)) ? ((IData)(1U) 
                                         + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                : ((0x344U == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                               >> 0x14U)) ? ((IData)(1U) 
                                             + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle)
                    : Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134))
            : ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle));
    vlSelf->Tile__DOT__arb_io_nasti_aw_valid = ((IData)(vlSelf->Tile__DOT__dcache_io_nasti_aw_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
    Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__isSameSign 
        = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 
            >> 0x1fU) == (vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2 
                          >> 0x1fU));
    Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff 
        = (vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 
           - vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2);
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
    vlSelf->io_nasti_aw_valid = vlSelf->Tile__DOT__arb_io_nasti_aw_valid;
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
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h127fcdb0__0, vlSelf->Tile__DOT__icache__DOT__d, 
                  (0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__icache__DOT__is_dirty = (1U 
                                                & (vlSelf->Tile__DOT__icache__DOT___hit_T[0U] 
                                                   & __Vtemp_h127fcdb0__0[0U]));
    vlSelf->Tile__DOT__arb_io_dcache_ar_ready = (((IData)(vlSelf->io_nasti_ar_ready) 
                                                  & (~ (IData)(vlSelf->Tile__DOT__arb_io_nasti_aw_valid))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
    vlSelf->Tile__DOT__icache__DOT__hit = (vlSelf->Tile__DOT__icache__DOT___hit_T[0U] 
                                           & (vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_data 
                                              == (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                                  >> 0xcU)));
    Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shin_T_9 
        = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
            >> 0x10U) | (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A 
                         << 0x10U));
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
    vlSelf->Tile__DOT__icache__DOT___wen_T_3 = ((2U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                & ((IData)(vlSelf->Tile__DOT__icache__DOT__hit) 
                                                   | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg)));
    vlSelf->Tile__DOT__icache__DOT__wen = (((2U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                            & ((IData)(vlSelf->Tile__DOT__icache__DOT__hit) 
                                               | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg))) 
                                           | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc));
    vlSelf->Tile__DOT__dcache__DOT___GEN_107 = (((IData)(vlSelf->Tile__DOT__arb_io_dcache_ar_ready) 
                                                 & (IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid))
                                                 ? 6U
                                                 : (IData)(vlSelf->Tile__DOT__dcache__DOT__state));
    vlSelf->Tile__DOT__arb_io_icache_ar_ready = ((IData)(vlSelf->Tile__DOT__arb_io_dcache_ar_ready) 
                                                 & (~ (IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid)));
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
    vlSelf->Tile__DOT__icache__DOT___wen_T = ((IData)(vlSelf->Tile__DOT__icache__DOT__hit) 
                                              | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg));
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
    vlSelf->Tile__DOT__icache__DOT___ren_T_2 = ((~ (IData)(vlSelf->Tile__DOT__icache__DOT__wen)) 
                                                & ((0U 
                                                    == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->Tile__DOT__icache__DOT__state))));
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
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall 
        = (1U & ((~ (IData)(vlSelf->Tile__DOT__icache_io_cpu_resp_valid)) 
                 | (~ (IData)(vlSelf->Tile__DOT__dcache_io_cpu_resp_valid))));
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
    vlSelf->Tile__DOT__core__DOT__dpath_io_dcache_req_valid 
        = ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)) 
           & ((0U != (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type)) 
              | (0U != (IData)(vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type))));
    if (((IData)(vlSelf->Tile__DOT__arb_io_icache_ar_ready) 
         & (IData)(vlSelf->Tile__DOT__icache_io_nasti_ar_valid))) {
        vlSelf->Tile__DOT__arb__DOT___GEN_0 = 1U;
        vlSelf->Tile__DOT__icache__DOT___GEN_107 = 6U;
    } else {
        vlSelf->Tile__DOT__arb__DOT___GEN_0 = vlSelf->Tile__DOT__arb__DOT__state;
        vlSelf->Tile__DOT__icache__DOT___GEN_107 = vlSelf->Tile__DOT__icache__DOT__state;
    }
    vlSelf->io_nasti_ar_valid = ((((IData)(vlSelf->Tile__DOT__icache_io_nasti_ar_valid) 
                                   | (IData)(vlSelf->Tile__DOT__dcache_io_nasti_ar_valid)) 
                                  & (~ (IData)(vlSelf->Tile__DOT__arb_io_nasti_aw_valid))) 
                                 & (0U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)));
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___GEN_31 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)
                                             ? (QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc))
                                             : vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc));
    Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet 
        = (((0x13U != vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst) 
            & (((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt)) 
                | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall)) 
               | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak))) 
           & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall)));
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
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3 
        = ((IData)(Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet)
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret);
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
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4 
        = (((IData)(Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isInstRet) 
            & (0xffffffffU == vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret))
            ? ((IData)(1U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth)
            : vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth);
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

VL_ATTR_COLD void VTile___024root___eval_initial(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___eval_initial\n"); );
    // Body
    VTile___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTile___024root___eval_settle(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___eval_settle\n"); );
    // Body
    VTile___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VTile___024root___final(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___final\n"); );
}

VL_ATTR_COLD void VTile___024root___ctor_var_reset(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_host_fromhost_valid = VL_RAND_RESET_I(1);
    vlSelf->io_host_fromhost_bits = VL_RAND_RESET_I(32);
    vlSelf->io_host_tohost = VL_RAND_RESET_I(32);
    vlSelf->io_nasti_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_aw_bits_id = VL_RAND_RESET_I(5);
    vlSelf->io_nasti_aw_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->io_nasti_aw_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_nasti_aw_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_nasti_aw_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_nasti_aw_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_aw_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_nasti_aw_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_nasti_aw_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_nasti_w_ready = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_w_valid = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_w_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_nasti_w_bits_strb = VL_RAND_RESET_I(8);
    vlSelf->io_nasti_w_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_b_ready = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_b_valid = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_b_bits_id = VL_RAND_RESET_I(5);
    vlSelf->io_nasti_b_bits_resp = VL_RAND_RESET_I(2);
    vlSelf->io_nasti_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_ar_bits_id = VL_RAND_RESET_I(5);
    vlSelf->io_nasti_ar_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->io_nasti_ar_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_nasti_ar_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_nasti_ar_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_nasti_ar_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_ar_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_nasti_ar_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_nasti_ar_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_nasti_r_ready = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_r_valid = VL_RAND_RESET_I(1);
    vlSelf->io_nasti_r_bits_id = VL_RAND_RESET_I(5);
    vlSelf->io_nasti_r_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_nasti_r_bits_resp = VL_RAND_RESET_I(2);
    vlSelf->io_nasti_r_bits_last = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache_io_cpu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache_io_nasti_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache_io_cpu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache_io_cpu_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__dcache_io_nasti_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache_io_nasti_w_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache_io_nasti_w_bits_last = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache_io_nasti_b_ready = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache_io_nasti_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__arb_io_icache_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__arb_io_dcache_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__arb_io_dcache_w_ready = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__arb_io_dcache_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__arb_io_nasti_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__arb_io_nasti_b_ready = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__arb_io_nasti_r_ready = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath_io_dcache_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__ctrl_io_pc_sel = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__ctrl_io_inst_kill = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__ctrl_io_imm_sel = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__core__DOT__ctrl_io_alu_op = VL_RAND_RESET_I(4);
    vlSelf->Tile__DOT__core__DOT__ctrl_io_st_type = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__ctrl_io_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_stall = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_out = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_io_expt = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_A = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_B = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu_io_sum = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen_io_out = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond_io_taken = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc_check = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc = VL_RAND_RESET_Q(33);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___next_pc_T_9 = VL_RAND_RESET_Q(33);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__next_pc = VL_RAND_RESET_Q(33);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___daddr_T = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___io_dcache_req_bits_mask_T_10 = VL_RAND_RESET_I(5);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT___GEN_31 = VL_RAND_RESET_Q(33);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_ = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1 = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mfromhost = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__privValid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEret = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__csrValid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__iaddrInvalid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__laddrInvalid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__saddrInvalid = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___time_T_1 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_1 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___cycle_T_1 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_2 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_3 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_96 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_97 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_135 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_165 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_166 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_168 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_169 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_176 = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_178 = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_179 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_180 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_181 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_182 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_183 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_184 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_191 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_193 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_200 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_239 = VL_RAND_RESET_Q(35);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftr_T_5 = VL_RAND_RESET_Q(33);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT___shiftl_T_38 = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT__Jimm = VL_RAND_RESET_I(21);
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__immGen__DOT___io_out_T_5 = VL_RAND_RESET_I(12);
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_185 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_240 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_425 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_576 = VL_RAND_RESET_I(2);
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_609 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_672 = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__core__DOT__ctrl__DOT___ctrlSignals_T_709 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__metaMem_tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_data = VL_RAND_RESET_I(20);
    vlSelf->Tile__DOT__icache__DOT__metaMem_tag_rmeta_addr_pipe_0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_0_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_1_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_2_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__icache__DOT__dataMem_3_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Tile__DOT__icache__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__icache__DOT__v);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__icache__DOT__d);
    vlSelf->Tile__DOT__icache__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__icache__DOT__cpu_data = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__icache__DOT__cpu_mask = VL_RAND_RESET_I(4);
    vlSelf->Tile__DOT__icache__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT__read_count = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT__read_wrap_out = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT__is_alloc = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT__is_alloc_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__icache__DOT___hit_T);
    vlSelf->Tile__DOT__icache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT___wen_T = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT___ren_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT__ren_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__icache__DOT__rdata);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__icache__DOT__rdata_buf);
    vlSelf->Tile__DOT__icache__DOT__refill_buf_0 = VL_RAND_RESET_Q(64);
    vlSelf->Tile__DOT__icache__DOT__refill_buf_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__icache__DOT__read);
    vlSelf->Tile__DOT__icache__DOT__wmask = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__icache__DOT__wdata);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__icache__DOT___v_T_1);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__icache__DOT___d_T_2);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__icache__DOT___d_T_4);
    vlSelf->Tile__DOT__icache__DOT__is_dirty = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__icache__DOT___GEN_107 = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__icache__DOT___GEN_128 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__metaMem_tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_data = VL_RAND_RESET_I(20);
    vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_rmeta_addr_pipe_0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_0_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_1_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_2_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Tile__DOT__dcache__DOT__dataMem_3_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Tile__DOT__dcache__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__dcache__DOT__v);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__dcache__DOT__d);
    vlSelf->Tile__DOT__dcache__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__dcache__DOT__cpu_data = VL_RAND_RESET_I(32);
    vlSelf->Tile__DOT__dcache__DOT__cpu_mask = VL_RAND_RESET_I(4);
    vlSelf->Tile__DOT__dcache__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT__read_count = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT__read_wrap_out = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT__write_count = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT__is_alloc = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__dcache__DOT___hit_T);
    vlSelf->Tile__DOT__dcache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT___wen_T = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT___ren_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT__ren_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__dcache__DOT__rdata);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__dcache__DOT__rdata_buf);
    vlSelf->Tile__DOT__dcache__DOT__refill_buf_0 = VL_RAND_RESET_Q(64);
    vlSelf->Tile__DOT__dcache__DOT__refill_buf_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__dcache__DOT__read);
    vlSelf->Tile__DOT__dcache__DOT__wmask = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(128, vlSelf->Tile__DOT__dcache__DOT__wdata);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__dcache__DOT___v_T_1);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__dcache__DOT___d_T_2);
    VL_RAND_RESET_W(256, vlSelf->Tile__DOT__dcache__DOT___d_T_4);
    vlSelf->Tile__DOT__dcache__DOT__is_dirty = VL_RAND_RESET_I(1);
    vlSelf->Tile__DOT__dcache__DOT___GEN_107 = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__dcache__DOT___GEN_108 = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__dcache__DOT___GEN_128 = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__arb__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__arb__DOT___GEN_0 = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__arb__DOT___GEN_3 = VL_RAND_RESET_I(3);
    vlSelf->Tile__DOT__arb__DOT___GEN_8 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_3__v0 = 0;
    vlSelf->__Vdly__Tile__DOT__icache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_3__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_0_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_0_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_0_0__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_0__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_3__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_0__v0 = 0;
    vlSelf->__Vdly__Tile__DOT__icache__DOT__read_count = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_1_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_1_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_1_3__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_3_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_3_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_3_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__icache__DOT__dataMem_2_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__icache__DOT__dataMem_2_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__icache__DOT__dataMem_2_0__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_3__v0 = 0;
    vlSelf->__Vdly__Tile__DOT__dcache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_3__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_0_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_0_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_0_0__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_0__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_3__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_0__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_1__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_1__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_1_3__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_1_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_1_3__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_3_2__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_3_2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_3_2__v0 = 0;
    vlSelf->__Vdlyvdim0__Tile__DOT__dcache__DOT__dataMem_2_0__v0 = 0;
    vlSelf->__Vdlyvval__Tile__DOT__dcache__DOT__dataMem_2_0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__Tile__DOT__dcache__DOT__dataMem_2_0__v0 = 0;
    vlSelf->__Vdly__Tile__DOT__dcache__DOT__read_count = VL_RAND_RESET_I(1);
}
