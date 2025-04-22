// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__2(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelfRef.Testbench__DOT__rstn;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0 
        = vlSelfRef.Testbench__DOT__judge__DOT__baud_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0 
        = vlSelfRef.Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                         15);
    vlSelfRef.Testbench__DOT__rstn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                         17);
    vlSelfRef.Testbench__DOT__rstn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                         19);
    VL_WRITEF_NX("success!!!\n",0);
    VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 21, "");
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                             11);
        vlSelfRef.Testbench__DOT__clk = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__2(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h518256a3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge Testbench.clk or negedge Testbench.rstn)", 
                                                             "/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                                             25);
        if (vlSelfRef.Testbench__DOT__rstn) {
            co_await vlSelfRef.__VdlySched.delay(0xc8ULL, 
                                                 nullptr, 
                                                 "/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                                 29);
            vlSelfRef.__VdlyVal__Testbench__DOT__clk_div__v0 
                = ((IData)(1U) + vlSelfRef.Testbench__DOT__clk_div);
            vlSelfRef.__VdlySet__Testbench__DOT__clk_div__v0 = 1U;
        } else {
            vlSelfRef.__VdlySet__Testbench__DOT__clk_div__v1 = 1U;
        }
    }
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__4(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__5(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__6(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__7(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__8(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__9(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__10(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__11(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__12(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_comb__TOP__0(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x12ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x22ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x43ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x12ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__10(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x22ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__11(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__12(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_h72335d0a_0;
extern const VlUnpacked<CData/*3:0*/, 64> VTestbench__ConstPool__TABLE_ha4eccaca_0;
extern const VlUnpacked<CData/*1:0*/, 32> VTestbench__ConstPool__TABLE_h2a31421b_0;
extern const VlUnpacked<CData/*1:0*/, 32> VTestbench__ConstPool__TABLE_h1994cc30_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTestbench__ConstPool__TABLE_h537a46f7_0;

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v = 0;
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift = 0;
    SData/*12:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync = 0;
    CData/*3:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state = 0;
    CData/*5:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt = 0;
    SData/*12:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc = 0;
    // Body
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt;
    vlSelfRef.__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0U;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state;
    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift;
    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc 
        = ((0U != (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))
            ? (0x1fffU & ((IData)(0x19aU) + (0xfffU 
                                             & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))))
            : 0x19aU);
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc 
        = (0x1fffU & ((IData)(0xccdU) + (0xfffU & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc))));
    if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc))) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt 
            = ((0U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt))));
    }
    if ((0U != (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt = 0U;
    } else if ((IData)((((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
                         >> 0xcU) & (~ ((5U >= (7U 
                                                & ((IData)(1U) 
                                                   + 
                                                   ([&]() {
                                            __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v = 8U;
                                            __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout = 0U;
                                            while (
                                                   (0U 
                                                    != 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout))) {
                                                __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout 
                                                    = 
                                                    ((IData)(1U) 
                                                     + __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout);
                                            }
                                        }(), __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout)))) 
                                        && (1U & ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt) 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ([&]() {
                                                __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v = 8U;
                                                __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout = 0U;
                                                while (
                                                       (0U 
                                                        != 
                                                        VL_SHIFTR_III(32,32,32, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout))) {
                                                    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout 
                                                        = 
                                                        ((IData)(1U) 
                                                         + __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout);
                                                }
                                            }(), __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout)))))))))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt)));
    }
    if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync 
            = ((2U & ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync) 
                      << 1U)) | (IData)(vlSelfRef.Testbench__DOT__rxd));
    }
    if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
         & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)))) {
        vlSelfRef.__VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data;
        vlSelfRef.__VdlyDim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = (7U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr));
        vlSelfRef.__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 1U;
    }
    if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow) 
         & ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state) 
            >> 3U))) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data 
            = (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit) 
                << 7U) | (0x7fU & ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data) 
                                   >> 1U)));
    }
    __Vtableidx2 = (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit) 
                     << 5U) | (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow) 
                                << 4U) | (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state)));
    if (VTestbench__ConstPool__TABLE_h72335d0a_0[__Vtableidx2]) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state 
            = VTestbench__ConstPool__TABLE_ha4eccaca_0
            [__Vtableidx2];
    }
    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready 
        = ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellinp__receiver__RxD_clear)) 
           & ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
              | (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow) 
                  & (2U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state))) 
                 & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit))));
    if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_ready) 
         & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer;
    } else if ((IData)((((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state) 
                         >> 3U) & ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc) 
                                   >> 0xcU)))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift), 1U));
    }
    if ((8U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((4U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((2U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                if ((1U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                    if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                        vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 2U;
                    }
                } else if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xfU;
                }
            } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xeU;
                }
            } else if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((1U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xcU;
                }
            } else if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xbU;
            }
        } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xaU;
            }
        } else if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 9U;
        }
    } else if ((4U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((2U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
            }
        } else if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 8U;
        }
    } else if ((2U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((1U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
            }
        } else if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((0x1000U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
        }
    } else if (vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid) {
        vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 4U;
    }
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_endofpacket 
        = (IData)((((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
                    >> 0xcU) & (0x1fU == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt))));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt;
    __Vtableidx1 = (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt) 
                     << 3U) | (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync) 
                                << 1U) | (1U & ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
                                                >> 0xcU))));
    if ((1U & VTestbench__ConstPool__TABLE_h2a31421b_0
         [__Vtableidx1])) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt 
            = VTestbench__ConstPool__TABLE_h1994cc30_0
            [__Vtableidx1];
    }
    if ((2U & VTestbench__ConstPool__TABLE_h2a31421b_0
         [__Vtableidx1])) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit 
            = VTestbench__ConstPool__TABLE_h537a46f7_0
            [__Vtableidx1];
    }
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow 
        = (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
            >> 0xcU) & (3U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt)));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__Testbench__DOT__judge__DOT__baud_cnt;
    __Vdly__Testbench__DOT__judge__DOT__baud_cnt = 0;
    CData/*3:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = 0;
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0;
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0;
    // Body
    __Vdly__Testbench__DOT__judge__DOT__baud_cnt = vlSelfRef.Testbench__DOT__judge__DOT__baud_cnt;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0U;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0U;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0U;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0U;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    if (vlSelfRef.Testbench__DOT__rstn) {
        if ((4U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__baud_cnt))) {
            vlSelfRef.Testbench__DOT__judge__DOT__baud_clk 
                = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__judge__DOT__baud_clk)));
            __Vdly__Testbench__DOT__judge__DOT__baud_cnt = 0U;
        } else {
            __Vdly__Testbench__DOT__judge__DOT__baud_cnt 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__judge__DOT__baud_cnt)));
        }
        if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
             & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)))) {
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
        }
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 1U;
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
            [0U];
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 1U;
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
            [0U];
        if ((1U & ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp)) 
                   & ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)) 
                      | (0U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state)))))) {
            __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer 
                = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo
                [(7U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr))];
        }
        if (vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp) {
            if (((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__empty)) 
                 & (0U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state)))) {
                vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
            }
        } else {
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 1U;
        }
    } else {
        vlSelfRef.Testbench__DOT__judge__DOT__baud_clk = 0U;
        __Vdly__Testbench__DOT__judge__DOT__baud_cnt = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr = 0U;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 1U;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 1U;
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
    }
    vlSelfRef.Testbench__DOT__judge__DOT__baud_cnt 
        = __Vdly__Testbench__DOT__judge__DOT__baud_cnt;
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] = 0U;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] = 0U;
    }
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__empty 
        = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__Testbench__DOT__judge__DOT__rdata;
    __Vdly__Testbench__DOT__judge__DOT__rdata = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg;
    __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 0;
    CData/*2:0*/ __Vdly__Testbench__DOT__judge__DOT__rwork_cnt;
    __Vdly__Testbench__DOT__judge__DOT__rwork_cnt = 0;
    // Body
    __Vdly__Testbench__DOT__judge__DOT__rdata = vlSelfRef.Testbench__DOT__judge__DOT__rdata;
    __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg 
        = vlSelfRef.Testbench__DOT__judge__DOT__rdata_state_reg;
    __Vdly__Testbench__DOT__judge__DOT__rwork_cnt = vlSelfRef.Testbench__DOT__judge__DOT__rwork_cnt;
    if (vlSelfRef.Testbench__DOT__rstn) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__rdata_state_reg))))) {
            vlSelfRef.Testbench__DOT__judge__DOT__next_rdata 
                = VL_RANDOM_I();
            vlSelfRef.Testbench__DOT__judge__DOT__rdata_cnt 
                = ((IData)(1U) + vlSelfRef.Testbench__DOT__judge__DOT__rdata_cnt);
            __Vdly__Testbench__DOT__judge__DOT__rdata 
                = (0xffU & vlSelfRef.Testbench__DOT__judge__DOT__next_rdata);
            vlSelfRef.Testbench__DOT__rxd = 0U;
            __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 1U;
            __Vdly__Testbench__DOT__judge__DOT__rwork_cnt = 7U;
            vlSelfRef.Testbench__DOT__judge__DOT__rdataQueue.push_back(
                                                                       (0xffU 
                                                                        & vlSelfRef.Testbench__DOT__judge__DOT__next_rdata));
            VL_WRITEF_NX("receive data %x\n",0,8,(0xffU 
                                                  & vlSelfRef.Testbench__DOT__judge__DOT__next_rdata));
        } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__rdata_state_reg))) {
            __Vdly__Testbench__DOT__judge__DOT__rdata 
                = (0x7fU & ((IData)(vlSelfRef.Testbench__DOT__judge__DOT__rdata) 
                            >> 1U));
            __Vdly__Testbench__DOT__judge__DOT__rwork_cnt 
                = (7U & ((IData)(vlSelfRef.Testbench__DOT__judge__DOT__rwork_cnt) 
                         - (IData)(1U)));
            vlSelfRef.Testbench__DOT__rxd = (1U & (IData)(vlSelfRef.Testbench__DOT__judge__DOT__rdata));
            if ((0U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__rwork_cnt))) {
                __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 2U;
            }
        } else {
            vlSelfRef.Testbench__DOT__rxd = 1U;
            __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 0U;
        }
    } else {
        __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 0U;
        vlSelfRef.Testbench__DOT__rxd = 1U;
    }
    vlSelfRef.Testbench__DOT__judge__DOT__rdata = __Vdly__Testbench__DOT__judge__DOT__rdata;
    vlSelfRef.Testbench__DOT__judge__DOT__rdata_state_reg 
        = __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg;
    vlSelfRef.Testbench__DOT__judge__DOT__rwork_cnt 
        = __Vdly__Testbench__DOT__judge__DOT__rwork_cnt;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg 
        = vlSelfRef.Testbench__DOT__judge__DOT__tdata_state_reg;
    vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__twork_cnt 
        = vlSelfRef.Testbench__DOT__judge__DOT__twork_cnt;
    vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata 
        = vlSelfRef.Testbench__DOT__judge__DOT__tdata;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__4(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__4\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.Testbench__DOT__error))) {
        VL_WRITEF_NX("fail!!!\n",0);
        VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 104, "");
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__5(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__5\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0;
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*3:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0;
    // Body
    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0U;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0U;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0U;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0U;
    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
        = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr;
    if (vlSelfRef.Testbench__DOT__rstn) {
        if (vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp) {
            if ((1U & ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__empty)) 
                       & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid))))) {
                vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
            }
        } else {
            vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 1U;
        }
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 1U;
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
            [0U];
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 1U;
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
            [0U];
        if ((1U & ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp)) 
                   & ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)) 
                      | (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid)))))) {
            vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
        }
        if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid) 
             & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full)))) {
            vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
        }
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp;
    } else {
        vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 1U;
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 1U;
        vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = 0U;
        vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray = 0U;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] = 0U;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] = 0U;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__6(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__6\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    __VdlyDim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0;
    // Body
    __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0U;
    if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid) 
         & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full)))) {
        __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata;
        __VdlyDim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = (7U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr));
        __VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 1U;
    }
    if (__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[__VdlyDim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0] 
            = __VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__7(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__7\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__Testbench__DOT__clk_div__v0) {
        vlSelfRef.__VdlySet__Testbench__DOT__clk_div__v0 = 0U;
        vlSelfRef.Testbench__DOT__clk_div = vlSelfRef.__VdlyVal__Testbench__DOT__clk_div__v0;
    }
    if (vlSelfRef.__VdlySet__Testbench__DOT__clk_div__v1) {
        vlSelfRef.__VdlySet__Testbench__DOT__clk_div__v1 = 0U;
        vlSelfRef.Testbench__DOT__clk_div = 0U;
    }
    vlSelfRef.Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk 
        = (1U & (vlSelfRef.Testbench__DOT__clk_div 
                 >> 2U));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__8(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__8\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready 
        = vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state 
        = vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_ready 
        = (0U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__9(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__9\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Testbench__DOT__rstn) {
        if ((0U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__tdata_state_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.Testbench__DOT__txd)))) {
                vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 1U;
                vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__twork_cnt = 7U;
            }
        } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__tdata_state_reg))) {
            vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__twork_cnt 
                = (7U & ((IData)(vlSelfRef.Testbench__DOT__judge__DOT__twork_cnt) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata 
                = (((IData)(vlSelfRef.Testbench__DOT__txd) 
                    << 7U) | (0x7fU & ((IData)(vlSelfRef.Testbench__DOT__judge__DOT__tdata) 
                                       >> 1U)));
            if ((0U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__twork_cnt))) {
                vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 2U;
            }
        } else if (VL_UNLIKELY(((2U == (IData)(vlSelfRef.Testbench__DOT__judge__DOT__tdata_state_reg))))) {
            vlSelfRef.Testbench__DOT__judge__DOT__tdataQueue.push_back(vlSelfRef.Testbench__DOT__judge__DOT__tdata);
            vlSelfRef.Testbench__DOT__judge__DOT__tdata_cnt 
                = ((IData)(1U) + vlSelfRef.Testbench__DOT__judge__DOT__tdata_cnt);
            vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 0U;
            vlSelfRef.Testbench__DOT__error = (vlSelfRef.Testbench__DOT__judge__DOT__tdataQueue.pop_front() 
                                               != vlSelfRef.Testbench__DOT__judge__DOT__rdataQueue.pop_front());
            VL_WRITEF_NX("transmit data %x\n",0,8,vlSelfRef.Testbench__DOT__judge__DOT__tdata);
        } else {
            vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 0U;
        }
    } else {
        vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata = 0U;
        vlSelfRef.Testbench__DOT__error = 0U;
        vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 0U;
    }
    vlSelfRef.Testbench__DOT__judge__DOT__tdata_state_reg 
        = vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg;
    vlSelfRef.Testbench__DOT__judge__DOT__twork_cnt 
        = vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__twork_cnt;
    vlSelfRef.Testbench__DOT__judge__DOT__tdata = vlSelfRef.__Vdly__Testbench__DOT__judge__DOT__tdata;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__10(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__10\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Testbench__DOT__rstn) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray 
            = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp;
    } else {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray = 0U;
    }
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp 
        = ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp) 
           == vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
           [1U]);
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full 
        = (((3U & (~ ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp) 
                      >> 2U))) == (3U & (vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                                         [1U] >> 2U))) 
           & ((3U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp)) 
              == (3U & vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                  [1U])));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__12(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__12\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__txd = (1U & ((4U > (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state)) 
                                           | (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state) 
                                               >> 3U) 
                                              & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift))));
    if (vlSelfRef.__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0) {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[vlSelfRef.__VdlyDim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0] 
            = vlSelfRef.__VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_comb__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_comb__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellinp__receiver__RxD_clear 
        = ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
           & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)));
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h518256a3__0.resume(
                                                   "@(posedge Testbench.clk or negedge Testbench.rstn)");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTestbench___024root___timing_commit(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_commit\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((! (1ULL & vlSelfRef.__VactTriggered.word(0U))) 
         | (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h518256a3__0.commit(
                                                   "@(posedge Testbench.clk or negedge Testbench.rstn)");
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestbench___024root___eval_triggers__act(vlSelf);
    VTestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTestbench___024root___timing_resume(vlSelf);
        VTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestbench___024root___eval_phase__nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestbench___024root___eval_debug_assertions(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_debug_assertions\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
