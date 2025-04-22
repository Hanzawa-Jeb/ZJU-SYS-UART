// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf);
VL_ATTR_COLD void VTestbench___024root____Vm_traceActivitySetAll(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_static(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root___eval_static__TOP(vlSelf);
    VTestbench___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static__TOP\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__clk = 0U;
    vlSelfRef.Testbench__DOT__rstn = 1U;
    vlSelfRef.Testbench__DOT__clk_div = 0U;
    vlSelfRef.Testbench__DOT__judge__DOT__rdata_cnt = 0U;
    vlSelfRef.Testbench__DOT__judge__DOT__tdata_cnt = 0U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift = 0U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc = 0U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state = 0U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync = 3U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt = 3U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit = 1U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt = 0U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt = 0U;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc = 0U;
}

VL_ATTR_COLD void VTestbench___024root___eval_final(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_final\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_settle(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_settle\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTestbench___024root___stl_sequent__TOP__0(vlSelf);
        VTestbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VTestbench___024root___eval_triggers__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge Testbench.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge Testbench.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge Testbench.judge.baud_clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge Testbench.judge.baud_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge Testbench.__Vcellinp__genblk1.loop_test__core_clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge Testbench.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge Testbench.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge Testbench.judge.baud_clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge Testbench.judge.baud_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge Testbench.__Vcellinp__genblk1.loop_test__core_clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root____Vm_traceActivitySetAll(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root____Vm_traceActivitySetAll\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
}

VL_ATTR_COLD void VTestbench___024root___ctor_var_reset(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___ctor_var_reset\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->Testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__clk_div = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__rxd = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__txd = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__judge__DOT__baud_cnt = VL_RAND_RESET_I(3);
    vlSelf->Testbench__DOT__judge__DOT__baud_clk = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__judge__DOT__tdataQueue.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__judge__DOT__rdataQueue.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__judge__DOT__rdata_cnt = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__judge__DOT__rdata_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__judge__DOT__rwork_cnt = VL_RAND_RESET_I(3);
    vlSelf->Testbench__DOT__judge__DOT__rdata = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__judge__DOT__next_rdata = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__judge__DOT__tdata_cnt = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__judge__DOT__tdata_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__judge__DOT__twork_cnt = VL_RAND_RESET_I(3);
    vlSelf->Testbench__DOT__judge__DOT__tdata = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc = VL_RAND_RESET_I(13);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellinp__receiver__RxD_clear = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_endofpacket = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt = VL_RAND_RESET_I(3);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt = VL_RAND_RESET_I(6);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc = VL_RAND_RESET_I(13);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray = VL_RAND_RESET_I(4);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata = VL_RAND_RESET_I(8);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Testbench__DOT__judge__DOT__twork_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__Testbench__DOT__clk_div__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__Testbench__DOT__clk_div__v0 = 0;
    vlSelf->__VdlySet__Testbench__DOT__clk_div__v1 = 0;
    vlSelf->__VdlyVal__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
