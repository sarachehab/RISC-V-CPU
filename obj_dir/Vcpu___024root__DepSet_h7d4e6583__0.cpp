// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

void Vcpu___024root___eval_act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v0;
    __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__pipeline_register_file__DOT__rf__v1;
    __Vdlyvdim0__cpu__DOT__pipeline_register_file__DOT__rf__v1 = 0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v1;
    __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__pipeline_register_file__DOT__rf__v1;
    __Vdlyvset__cpu__DOT__pipeline_register_file__DOT__rf__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0;
    __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0;
    __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0;
    __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1;
    __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1;
    __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1;
    __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2;
    __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2;
    __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3;
    __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3;
    __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4;
    __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4;
    __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4 = 0;
    // Body
    __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1 = 0U;
    __Vdlyvset__cpu__DOT__pipeline_register_file__DOT__rf__v1 = 0U;
    if (vlSelf->cpu__DOT__mem_write_m) {
        if (vlSelf->cpu__DOT__byte_op_m) {
            __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0 
                = (0xffU & vlSelf->cpu__DOT__write_data_m);
            __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0 = 1U;
            __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0 
                = (0x1ffffU & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr);
        } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__byte_op_m)))) {
            __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1 
                = (0xffU & vlSelf->cpu__DOT__write_data_m);
            __Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1 
                = (0x1ffffU & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr);
            __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->cpu__DOT__write_data_m 
                            >> 8U));
            __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr));
            __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3 
                = (0xffU & (vlSelf->cpu__DOT__write_data_m 
                            >> 0x10U));
            __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr));
            __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4 
                = (vlSelf->cpu__DOT__write_data_m >> 0x18U);
            __Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4 
                = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr));
        }
    }
    __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v0 
        = vlSelf->trigger;
    if (((IData)(vlSelf->cpu__DOT__reg_write_w) & (0U 
                                                   != (IData)(vlSelf->cpu__DOT__rd_w)))) {
        __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v1 
            = vlSelf->cpu__DOT__result_w;
        __Vdlyvset__cpu__DOT__pipeline_register_file__DOT__rf__v1 = 1U;
        __Vdlyvdim0__cpu__DOT__pipeline_register_file__DOT__rf__v1 
            = vlSelf->cpu__DOT__rd_w;
    }
    if (__Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0) {
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0] 
            = __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1) {
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1] 
            = __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v1;
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2] 
            = __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v2;
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3] 
            = __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v3;
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4] 
            = __Vdlyvval__cpu__DOT__pipeline_data_memory__DOT__data_ram__v4;
    }
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x13U] 
        = __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v0;
    if (__Vdlyvset__cpu__DOT__pipeline_register_file__DOT__rf__v1) {
        vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[__Vdlyvdim0__cpu__DOT__pipeline_register_file__DOT__rf__v1] 
            = __Vdlyvval__cpu__DOT__pipeline_register_file__DOT__rf__v1;
    }
    vlSelf->a0 = vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
        [0xaU];
}

extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h524972ea_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_ha62fcc6c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h356a26d2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hae527aed_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_he9de6950_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h5a39c6bc_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_h9e07eb29_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h78f2d6f9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h77a192f1_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vcpu__ConstPool__TABLE_hba1a01eb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcpu__ConstPool__TABLE_h937a1e03_0;

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__cpu__DOT__pipeline_program_counter__DOT__pc_next;
    __Vdly__cpu__DOT__pipeline_program_counter__DOT__pc_next = 0;
    // Body
    __Vdly__cpu__DOT__pipeline_program_counter__DOT__pc_next 
        = vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next;
    if (vlSelf->rst) {
        __Vdly__cpu__DOT__pipeline_program_counter__DOT__pc_next = 0xbfc00000U;
    } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__stall_f)))) {
        if (vlSelf->cpu__DOT__jalr_e) {
            if (vlSelf->cpu__DOT__jalr_e) {
                __Vdly__cpu__DOT__pipeline_program_counter__DOT__pc_next 
                    = vlSelf->cpu__DOT__alu_result_e;
            }
        } else {
            __Vdly__cpu__DOT__pipeline_program_counter__DOT__pc_next 
                = ((IData)(vlSelf->cpu__DOT__jb_taken_e)
                    ? (vlSelf->cpu__DOT__pc_e + vlSelf->cpu__DOT__imm_ext_e)
                    : ((IData)(4U) + vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next));
        }
    }
    vlSelf->cpu__DOT__pc_plus4_w = vlSelf->cpu__DOT__pc_plus4_m;
    vlSelf->cpu__DOT__alu_result_w = vlSelf->cpu__DOT__alu_result_m;
    vlSelf->cpu__DOT__result_src_w = vlSelf->cpu__DOT__result_src_m;
    vlSelf->cpu__DOT__imm_ext_w = vlSelf->cpu__DOT__imm_ext_m;
    vlSelf->cpu__DOT__write_data_m = vlSelf->cpu__DOT__write_data_e;
    vlSelf->cpu__DOT__mem_write_m = vlSelf->cpu__DOT__mem_write_e;
    vlSelf->cpu__DOT__reg_write_w = vlSelf->cpu__DOT__reg_write_m;
    vlSelf->cpu__DOT__rd_w = vlSelf->cpu__DOT__rd_m;
    vlSelf->cpu__DOT__read_data_w = ((IData)(vlSelf->cpu__DOT__byte_op_m)
                                      ? ((IData)(vlSelf->cpu__DOT__byte_op_m)
                                          ? vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                         [(0x1ffffU 
                                           & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr)]
                                          : 0U) : (
                                                   (vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                          [
                                                          (0x1ffffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                                          << 8U) 
                                                         | vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                         [
                                                         (0x1ffffU 
                                                          & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr)]))));
    vlSelf->cpu__DOT__byte_op_m = vlSelf->cpu__DOT__byte_op_e;
    vlSelf->cpu__DOT__pc_plus4_m = vlSelf->cpu__DOT__pc_plus4_e;
    vlSelf->cpu__DOT__alu_result_m = vlSelf->cpu__DOT__alu_result_e;
    vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr 
        = ((IData)(vlSelf->cpu__DOT__byte_op_m) ? vlSelf->cpu__DOT__alu_result_m
            : (0xfffffffcU & vlSelf->cpu__DOT__alu_result_m));
    vlSelf->cpu__DOT__result_src_m = vlSelf->cpu__DOT__result_src_e;
    vlSelf->cpu__DOT__result_w = ((2U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? vlSelf->cpu__DOT__imm_ext_w
                                       : vlSelf->cpu__DOT__pc_plus4_w)
                                   : ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? vlSelf->cpu__DOT__read_data_w
                                       : vlSelf->cpu__DOT__alu_result_w));
    vlSelf->cpu__DOT__imm_ext_m = vlSelf->cpu__DOT__imm_ext_e;
    vlSelf->cpu__DOT__reg_write_m = vlSelf->cpu__DOT__reg_write_e;
    vlSelf->cpu__DOT__rd_m = vlSelf->cpu__DOT__rd_e;
    if (vlSelf->cpu__DOT__flush_e) {
        if (vlSelf->cpu__DOT__flush_e) {
            vlSelf->cpu__DOT__alu_control_e = 0U;
            vlSelf->cpu__DOT__branch_e = 0U;
            vlSelf->cpu__DOT__jump_e = 0U;
            vlSelf->cpu__DOT__alu_src_e = 0U;
            vlSelf->cpu__DOT__rs1_e = 0U;
            vlSelf->cpu__DOT__rd1_e = 0U;
            vlSelf->cpu__DOT__rs2_e = 0U;
            vlSelf->cpu__DOT__rd2_e = 0U;
            vlSelf->cpu__DOT__pc_e = 0U;
            vlSelf->cpu__DOT__jalr_e = 0U;
            vlSelf->cpu__DOT__mem_write_e = 0U;
            vlSelf->cpu__DOT__byte_op_e = 0U;
            vlSelf->cpu__DOT__pc_plus4_e = 0U;
            vlSelf->cpu__DOT__result_src_e = 0U;
            vlSelf->cpu__DOT__imm_ext_e = 0U;
            vlSelf->cpu__DOT__reg_write_e = 0U;
            vlSelf->cpu__DOT__rd_e = 0U;
        }
    } else {
        vlSelf->cpu__DOT__alu_control_e = vlSelf->cpu__DOT__alu_control_d;
        vlSelf->cpu__DOT__branch_e = vlSelf->cpu__DOT__branch_d;
        vlSelf->cpu__DOT__jump_e = vlSelf->cpu__DOT__jump_d;
        vlSelf->cpu__DOT__alu_src_e = vlSelf->cpu__DOT__alu_src_d;
        vlSelf->cpu__DOT__rs1_e = (0x1fU & (vlSelf->cpu__DOT__instr_d 
                                            >> 0xfU));
        vlSelf->cpu__DOT__rd1_e = vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
            [(0x1fU & (vlSelf->cpu__DOT__instr_d >> 0xfU))];
        vlSelf->cpu__DOT__rs2_e = (0x1fU & (vlSelf->cpu__DOT__instr_d 
                                            >> 0x14U));
        vlSelf->cpu__DOT__rd2_e = vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
            [(0x1fU & (vlSelf->cpu__DOT__instr_d >> 0x14U))];
        vlSelf->cpu__DOT__pc_e = vlSelf->cpu__DOT__pc_d;
        vlSelf->cpu__DOT__jalr_e = vlSelf->cpu__DOT__jalr_d;
        vlSelf->cpu__DOT__mem_write_e = vlSelf->cpu__DOT__mem_write_d;
        vlSelf->cpu__DOT__byte_op_e = vlSelf->cpu__DOT__byte_op_d;
        vlSelf->cpu__DOT__pc_plus4_e = vlSelf->cpu__DOT__pc_plus4_d;
        vlSelf->cpu__DOT__result_src_e = vlSelf->cpu__DOT__result_src_d;
        vlSelf->cpu__DOT__imm_ext_e = vlSelf->cpu__DOT__imm_ext_d;
        vlSelf->cpu__DOT__reg_write_e = vlSelf->cpu__DOT__reg_write_d;
        vlSelf->cpu__DOT__rd_e = (0x1fU & (vlSelf->cpu__DOT__instr_d 
                                           >> 7U));
    }
    if (vlSelf->cpu__DOT__flush_d) {
        if (vlSelf->cpu__DOT__flush_d) {
            vlSelf->cpu__DOT__pc_d = 0U;
            vlSelf->cpu__DOT__pc_plus4_d = 0U;
            vlSelf->cpu__DOT__instr_d = 0U;
        }
    } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__stall_d)))) {
        vlSelf->cpu__DOT__pc_d = vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next;
        vlSelf->cpu__DOT__pc_plus4_d = ((IData)(4U) 
                                        + vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next);
        vlSelf->cpu__DOT__instr_d = ((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                      [(0xffcU & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)] 
                                      << 0x18U) | (
                                                   (vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0xffcU 
                                                         & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                                       [
                                                       (0xfffU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffcU 
                                                            & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))] 
                                                       << 8U) 
                                                      | vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                                      [
                                                      (0xfffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          (0xffcU 
                                                           & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))])));
    }
    vlSelf->cpu__DOT__result_m = ((1U & (IData)(vlSelf->cpu__DOT__result_src_m))
                                   ? vlSelf->cpu__DOT__imm_ext_m
                                   : vlSelf->cpu__DOT__alu_result_m);
    vlSelf->cpu__DOT__forward1_e = (((((IData)(vlSelf->cpu__DOT__rs1_e) 
                                       == (IData)(vlSelf->cpu__DOT__rd_m)) 
                                      & (IData)(vlSelf->cpu__DOT__reg_write_m)) 
                                     & (0U != (IData)(vlSelf->cpu__DOT__rs1_e)))
                                     ? 1U : (((((IData)(vlSelf->cpu__DOT__rs1_e) 
                                                == (IData)(vlSelf->cpu__DOT__rd_w)) 
                                               & (IData)(vlSelf->cpu__DOT__reg_write_w)) 
                                              & (0U 
                                                 != (IData)(vlSelf->cpu__DOT__rs1_e)))
                                              ? 2U : 0U));
    vlSelf->cpu__DOT__forward2_e = (((((IData)(vlSelf->cpu__DOT__rs2_e) 
                                       == (IData)(vlSelf->cpu__DOT__rd_m)) 
                                      & (IData)(vlSelf->cpu__DOT__reg_write_m)) 
                                     & (0U != (IData)(vlSelf->cpu__DOT__rs2_e)))
                                     ? 1U : (((((IData)(vlSelf->cpu__DOT__rs2_e) 
                                                == (IData)(vlSelf->cpu__DOT__rd_w)) 
                                               & (IData)(vlSelf->cpu__DOT__reg_write_w)) 
                                              & (0U 
                                                 != (IData)(vlSelf->cpu__DOT__rs2_e)))
                                              ? 2U : 0U));
    vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
        = ((0U == (IData)(vlSelf->cpu__DOT__forward1_e))
            ? vlSelf->cpu__DOT__rd1_e : ((1U == (IData)(vlSelf->cpu__DOT__forward1_e))
                                          ? vlSelf->cpu__DOT__result_m
                                          : ((2U == (IData)(vlSelf->cpu__DOT__forward1_e))
                                              ? vlSelf->cpu__DOT__result_w
                                              : 0U)));
    vlSelf->cpu__DOT__write_data_e = ((0U == (IData)(vlSelf->cpu__DOT__forward2_e))
                                       ? vlSelf->cpu__DOT__rd2_e
                                       : ((1U == (IData)(vlSelf->cpu__DOT__forward2_e))
                                           ? vlSelf->cpu__DOT__result_m
                                           : ((2U == (IData)(vlSelf->cpu__DOT__forward2_e))
                                               ? vlSelf->cpu__DOT__result_w
                                               : 0U)));
    vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2 
        = ((IData)(vlSelf->cpu__DOT__alu_src_e) ? vlSelf->cpu__DOT__imm_ext_e
            : vlSelf->cpu__DOT__write_data_e);
    vlSelf->cpu__DOT__alu_result_e = ((8U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                       ? ((4U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                           ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                                   : 0U))
                                           : ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   - vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))))
                                       : ((4U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                           ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   | vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   ^ vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)))
                                           : ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1)) 
                                                   < (QData)((IData)(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)))
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   < vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   + vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)))));
    vlSelf->cpu__DOT__jb_taken_e = (((vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                      != vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2) 
                                     & (IData)(vlSelf->cpu__DOT__branch_e)) 
                                    | (IData)(vlSelf->cpu__DOT__jump_e));
    vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next 
        = __Vdly__cpu__DOT__pipeline_program_counter__DOT__pc_next;
    vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall 
        = ((1U == (IData)(vlSelf->cpu__DOT__result_src_e)) 
           & (((0x1fU & (vlSelf->cpu__DOT__instr_d 
                         >> 0xfU)) == (IData)(vlSelf->cpu__DOT__rd_e)) 
              | ((0x1fU & (vlSelf->cpu__DOT__instr_d 
                           >> 0x14U)) == (IData)(vlSelf->cpu__DOT__rd_e))));
    vlSelf->cpu__DOT__stall_f = vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall;
    vlSelf->cpu__DOT__stall_d = vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall;
    vlSelf->cpu__DOT__flush_d = ((IData)(vlSelf->cpu__DOT__jalr_e) 
                                 | (IData)(vlSelf->cpu__DOT__jb_taken_e));
    vlSelf->cpu__DOT__flush_e = ((IData)(vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall) 
                                 | (IData)(vlSelf->cpu__DOT__flush_d));
    __Vtableidx1 = (0x7fU & vlSelf->cpu__DOT__instr_d);
    vlSelf->cpu__DOT__reg_write_d = Vcpu__ConstPool__TABLE_h524972ea_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__imm_src_d = Vcpu__ConstPool__TABLE_ha62fcc6c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu_src_d = Vcpu__ConstPool__TABLE_h356a26d2_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__mem_write_d = Vcpu__ConstPool__TABLE_hae527aed_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__result_src_d = Vcpu__ConstPool__TABLE_he9de6950_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__branch_d = Vcpu__ConstPool__TABLE_h5a39c6bc_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__pipeline_control_unit__DOT__alu_op 
        = Vcpu__ConstPool__TABLE_h9e07eb29_0[__Vtableidx1];
    vlSelf->cpu__DOT__jump_d = Vcpu__ConstPool__TABLE_h78f2d6f9_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__jalr_d = Vcpu__ConstPool__TABLE_h77a192f1_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__imm_ext_d = ((4U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                    ? ((2U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                                 ? 0U
                                                 : 
                                                (0xfffff000U 
                                                 & vlSelf->cpu__DOT__instr_d)))
                                    : ((2U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                        ? ((1U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->cpu__DOT__instr_d) 
                                                  | ((0x800U 
                                                      & (vlSelf->cpu__DOT__instr_d 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->cpu__DOT__instr_d 
                                                           >> 0x14U)))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->cpu__DOT__instr_d 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->cpu__DOT__instr_d 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->cpu__DOT__instr_d 
                                                           >> 7U))))))
                                        : ((1U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->cpu__DOT__instr_d 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->cpu__DOT__instr_d 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->cpu__DOT__instr_d 
                                                  >> 0x14U)))));
    __Vtableidx2 = (((IData)((0x40000020U == (0x40000020U 
                                              & vlSelf->cpu__DOT__instr_d))) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xaU)) 
                               | (IData)(vlSelf->cpu__DOT__pipeline_control_unit__DOT__alu_op)));
    vlSelf->cpu__DOT__alu_control_d = Vcpu__ConstPool__TABLE_hba1a01eb_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__byte_op_d = Vcpu__ConstPool__TABLE_h937a1e03_0
        [__Vtableidx2];
}

void Vcpu___024root___eval_nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cpu.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cpu.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG