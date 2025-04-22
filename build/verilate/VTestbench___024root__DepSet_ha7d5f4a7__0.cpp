// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_triggers__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.Testbench__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.Testbench__DOT__rstn)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.Testbench__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.Testbench__DOT__judge__DOT__baud_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0))));
    vlSelfRef.__VactTriggered.set(4U, ((~ (IData)(vlSelfRef.Testbench__DOT__judge__DOT__baud_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0))));
    vlSelfRef.__VactTriggered.set(6U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelfRef.Testbench__DOT__rstn;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0 
        = vlSelfRef.Testbench__DOT__judge__DOT__baud_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0 
        = vlSelfRef.Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__11(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__11\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
        = vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
    if (vlSelfRef.Testbench__DOT__rstn) {
        if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid) 
             & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full)))) {
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata 
                = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata;
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = 1U;
        } else {
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = 0U;
        }
        if (((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid) 
             & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid)))) {
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata 
                = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer;
        }
        if ((1U & ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp)) 
                   & ((~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)) 
                      | (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid)))))) {
            vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer 
                = vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo
                [(7U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr))];
        }
    } else {
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata = 0U;
        vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer = 0U;
    }
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full 
        = (((3U & (~ ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp) 
                      >> 2U))) == (3U & (vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                                         [1U] >> 2U))) 
           & ((3U & (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp)) 
              == (3U & vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                  [1U])));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr), 1U) 
                   ^ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid 
        = ((IData)(vlSelfRef.Testbench__DOT__rstn) 
           && ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid) 
               & (IData)(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp 
        = ((IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp) 
           == vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
           [1U]);
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid 
        = vlSelfRef.__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid;
    vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready 
        = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid)));
    vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__empty 
        = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)));
}
