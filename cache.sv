
/*----message for neil------

our memory range is ->                    00 01 FF FF :: 00 00 00 00
so most significant byte is always zero   ^              ^
so lets take same random address (in binary like) : 0000 , 1010 , 1001 , 01______00
                                                    ^^^^   ^^^^   ||||   ^^##
                                                        tag       block  block__byte
so i think it might be possible to make the tag 8bit instead of 24?

i am also thinkning that we should split our cache into 2 sv files with a top file: 
  1>cache memory which 




*/

// tag == 24 bits
// set == 4 bits
// block offset == 2 bits
// byte offset == 2 bits (00) 
module cache (
  input logic clk_i,
  input logic [7:0] address_i,
  input logic write_enable_i,
  input logic [31:0] write_data_i,
  
  output logic [31:0] read_data_o
);


  // cache parameters
  parameter set_bits = 4;
  parameter block_offset_bits = 2;
  parameter byte_offset_bits = 2;
  parameter tag_bits = 24;
  parameter data_width = 32;
  parameter ways = 4;

  logic[23:0] tag;
  logic hit_0_or_1, hit_2_or_3;
  logic [1:0]hit;
  
  // Data and tag
  logic [data_width-1:0] cache_data [((2**set_bits)-1):0][3:0];
  logic [tag_bits-1:0] cache_tag [((2**set_bits)-1):0][3:0];  

  // Signals to control cache access
  logic [3:0] set;
  logic [1:0] block_offset;
  logic [1:0] byte_offset;

  // Cache read operation
 always_ff @(posedge clk_i) begin
    set <= address_i[7:4];
    block_offset <= address_i[3:2];
    byte_offset <= address_i[1:0];

/*write enable to be done buy utsav

require logic to check if cache block is occupied, if it is occupied, check if proceeding block is occupied? 

if entire set has been filled we need a system to fetch














*/
  read_data_o = (tag==cache_tag[set][0]) ? cache_data[set][0]:
                (tag==cache_tag[set][1]) ? cache_data[set][1]:
                (tag==cache_tag[set][2]) ? cache_data[set][2]:
                (tag==cache_tag[set][3]) ? cache_data[set][3]:
                32'b0;
                
                
                

 end
endmodule
