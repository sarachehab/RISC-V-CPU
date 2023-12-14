module cacheline #(
    parameter   width = 32,
			 	tag_bits = 30,
                BYTE_WIDTH = 8
)(
	input logic clk_i , write_enable_i, cache_enable_i, byte_op_i,
	input logic [width-1:0] address_i , write_data_i,
	//output signals
	output logic [width-1:0] read_data_o,
	//memory interface signals
	input logic [width-1:0] mem_incoming_data_i,
	output logic [width-1:0] mem_address_o , mem_write_data_o,
	output logic mem_write_enable_o , mem_byte_op_o
);
//--------------------------data_structure---------------------------

	logic [width-1:0] cache_data[3:0];
	logic [tag_bits-1:0] cache_tag [3:0];
	logic valid [3:0];
    logic [1:0] counter;
//------------------------internal_signals----------------------------
    logic [tag_bits-1 :0] tag;
    logic [1:0] byteoffset;
    logic hit;
    logic [1:0] wayhit;

//-------------------------assign_values--------------------------------
    assign set = address_i[5:2];
    assign tag = address_i[31:2];
    assign byteoffset = address_i[1:0];
    assign mem_address_o = address_i;
    assign mem_write_enable_o = write_enable_i;
//----------------------------------------------------------------------
    initial begin
        hit = 1'b0;
        readmiss = 1'b1;
        for(int i = 0 ; i<4 ; i++) begin
            valid[i[1:0]] = 1'b0;
        end
    end
    always_comb begin
        //check for tag match 
        for(int i = 0 ; i < 4 ; i++) begin
            if(cache_tag[i[1:0]] == tag) begin
                hit = 1'b1;
                wayhit = i[1:0];
                break;
            end
            else
                hit = 1'b0;
        end

        if(!write_enable_i) begin
            mem_write_enable_o = 1'b0;
            if(hit) begin
                read_data_o = cache_data[wayhit];
            end
            else begin
                mem_address_o = address_i;
                cache_data[counter] = mem_incoming_data_i;
                read_data_o = cache_data[counter];
            end
        end
        else begin
            mem_address_o = address_i;
            mem_write_enable_o = 1'b1;
            if(hit) begin
                cache_data[wayhit] = write_data_i;
                mem_write_data_o = write_data_i;
            end
            else begin
                cache_data[counter] = write_data_i;
                mem_write_data_o = write_data_i;
            end
        end
    end 
endmodule

/*note to self
if load instruction with byteop and there is a miss fetch whole word so mem_byte_op_o will be 0
but output must be correct so we need a condition for outputing the correct byte...

if load instruction with byteop and there is a hit we just use the logic from before...

if store instruction mem_byte_op_o = byte_op_i...
it doesnt matter if there is a hit or a miss we need some logic to write to the correct bits in our cache_data...
31    24 23    16 15     8 7      0
11001001 11100111 11011111 11010101


also need to make read_data_o 32'b0 for non read instructions...

00 01 10 11
00 11 01 10          
00 10 11 01    


if(byte_op_i) begin
    case(byteoffset)
        2'b00 : cache_data[set][LRU_pointer[set]][7:0] <= write_data_i[7:0];
        2'b01 : cache_data[set][LRU_pointer[set]][15:8] <= write_data_i[7:0];
        2'b10 : cache_data[set][LRU_pointer[set]][23:16] <= write_data_i[7:0];
        2'b11 : cache_data[set][LRU_pointer[set]][31:24] <= write_data_i[7:0];
    endcase
end
else begin
    cache_data[set][LRU_pointer[set]] <= write_data_i;
end
*/



