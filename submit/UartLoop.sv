`include"uart_struct.vh"
module UartLoop(
    input clk,
    input rstn,
    Decoupled_ift.Slave uart_rdata,
    //an interface with its own valid and ready signal
    Decoupled_ift.Master uart_tdata,
    input UartPack::uart_t debug_data,
    input logic debug_send,
    output UartPack::uart_t debug_rdata,
    output UartPack::uart_t debug_tdata
);
    import UartPack::*;

    uart_t rdata;
    //typedef logic [UART_DATA_WIDTH-1:0] uart_t
    logic rdata_valid;
    //the validity of the data in rdata

    uart_t tdata;
    //store the data to be sent
    logic tdata_valid;
    //the validity of the data in tdata

    always_ff@(posedge clk or negedge rstn) begin
        if (~rstn) begin
            rdata <= '0;
            rdata_valid <= 1'b0;
            tdata <= '0;
            tdata_valid <= 1'b0;
        end else begin
            //receive the data
            if (uart_rdata.valid && uart_rdata.ready) begin
                rdata <= uart_rdata.data;
                //the rdata here is a register to store the data
                rdata_valid <= 1'b1;
                //set the valid signal
            end else begin
                rdata_valid <= 1'b0;
                //wait for the valid and ready signal
            end
            //send the data
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

    assign uart_rdata.ready = ~rdata_valid;
    assign uart_tdata.data = tdata;
    assign uart_tdata.valid = tdata_valid;

    assign debug_rdata = rdata;
    assign debug_tdata = tdata;

endmodule