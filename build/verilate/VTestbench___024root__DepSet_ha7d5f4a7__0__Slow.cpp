// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

extern const VlWide<16>/*511:0*/ VTestbench__ConstPool__CONST_hf5578bd2_0;

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(16, VTestbench__ConstPool__CONST_hf5578bd2_0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root___eval_triggers__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_triggers__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___stl_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready 
        = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid)));
    vlSelfRef.Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk 
        = (1U & (vlSelfRef.Testbench__DOT__clk_div 
                 >> 2U));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_ready 
        = (0U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__empty 
        = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__empty 
        = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)));
    vlSelfRef.Testbench__DOT__txd = (1U & ((4U > (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state)) 
                                           | (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state) 
                                               >> 3U) 
                                              & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift))));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow 
        = (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
            >> 0xcU) & (3U == (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full 
        = (((3U & (~ ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp) 
                      >> 2U))) == (3U & (vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                                         [1U] >> 2U))) 
           & ((3U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp)) 
              == (3U & vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                  [1U])));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp 
        = ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp) 
           == vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
           [1U]);
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp 
        = ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp) 
           == vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
           [1U]);
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full 
        = (((3U & (~ ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp) 
                      >> 2U))) == (3U & (vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                                         [1U] >> 2U))) 
           & ((3U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp)) 
              == (3U & vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                  [1U])));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellinp__receiver__RxD_clear 
        = ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
           & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)));
}
