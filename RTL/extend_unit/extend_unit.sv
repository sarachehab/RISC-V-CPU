module extend_unit # (
    parameter DATA_WIDTH = 32
)(
    //input signals
    input   logic [DATA_WIDTH-1:7]   instr_i, //instruction
    input   logic [2:0]                  imm_src_i,
    
    //output
    output  logic [DATA_WIDTH-1:0]  imm_ext_o //output imm extended into 32 bits
);

always_comb

    case(imm_src_i)

        //type I
        3'b000: imm_ext_o = {{20{instr_i[31]}}, instr_i[31:20]};
        // type S
        3'b001: imm_ext_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]};
        //type B
        3'b010: imm_ext_o = {{20{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], {1'b0}}; 
        //type Jal
        3'b011: imm_ext_o = {{12{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], {1'b0}};
        
        //type U
        3'b100: imm_ext_o = {instr_i[31:12], {12{1'b0}}};

        default: imm_ext_o = 32'b0;

    endcase

endmodule

