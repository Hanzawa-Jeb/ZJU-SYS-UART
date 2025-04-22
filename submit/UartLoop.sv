`include"uart_struct.vh"
module UartLoop(
    input clk,
    input rstn,
    Decoupled_ift.Slave uart_rdata,
    Decoupled_ift.Master uart_tdata,
    input UartPack::uart_t debug_data,
    input logic debug_send,
    output UartPack::uart_t debug_rdata,
    output UartPack::uart_t debug_tdata
);
    import UartPack::*;

    uart_t rdata;
    logic rdata_valid;

    uart_t tdata;
    logic tdata_valid;

    always_ff@(posedge clk or negedge rstn) begin
        if (~rstn) begin
            rdata <= '0;
            rdata_valid <= 1'b0;
            tdata <= '0;
            tdata_valid <= 1'b0;
        end else begin
            // 接收数据
            if (uart_rdata.valid && uart_rdata.ready) begin
                rdata <= uart_rdata.data;
                rdata_valid <= 1'b1;
            end else begin
                rdata_valid <= 1'b0;
            end

            // 发送数据
            if (debug_send) begin
                tdata <= debug_data;
                tdata_valid <= 1'b1;
            end else if (rdata_valid && uart_tdata.ready) begin
                tdata <= rdata;
                tdata_valid <= 1'b1;
            end else begin
                tdata_valid <= 1'b0;
            end
        end
    end

    assign uart_rdata.ready = ~rdata_valid; // 准备接收新数据
    assign uart_tdata.data = tdata;
    assign uart_tdata.valid = tdata_valid;

    assign debug_rdata = rdata;
    assign debug_tdata = tdata;

endmodule