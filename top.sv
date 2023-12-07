module RISCV32I #(
    parameter DATA_WIDTH = 32
)(
    input logic clk_i, rst_i,
    output logic [DATA_WIDTH-1:0] a0_o
);


    logic   JB_instr, JALR_instr, mem_write, alu_src, reg_write, byte_address, zero;
    logic [DATA_WIDTH-1:0] instr, pc, pc_plus_4, rs1_plus_imm, imm_ext; 
    logic [1:0] result_src; 
    logic [2:0] imm_src;
    logic [3:0] alu_control;

controlUnit_top controlUnit_top(
    .op_i(instr[6:0]),
    .funct3_i(instr[14:12]),
    .funct7_b5_i(instr[30]),
    .zero_i(zero),
    .branch_o(branch_ex),
    .jump_o(jump_ex),
    .result_src_o(result_src),
    .mem_write_o(mem_write),
    .alu_src_o(alu_src),
    .imm_src_o(imm_src),
    .reg_write_o(reg_write),
    .alu_control_o(alu_control),
    .byte_address_o(byte_address)
    
);

datapath datapath(
    .clk_i(clk_i),
    .reg_addr1_i(instr[19:15]),
    .reg_addr2_i(instr[24:20]),
    .reg_addr3_i(instr[11:7]),
    .reg_we_i(reg_write),
    .result_src_i(result_src),
    .imm_ext_i(imm_ext),
    .pc_next_i(pc_plus_4),
    .data_mem_we_i(mem_write),
    .data_mem_byte_op_i(byte_address),
    .alu_control_i(alu_control),
    .alu_src_i(alu_src),
    .eq_o(zero),
    .a0_o(a0_o)
);

extend_unit extend_unit(
    .instr_i(instr[31:7]),
    .imm_src_i(imm_src),
    .imm_ext_o(imm_ext)

);

instruction_memory instruction_memory(
    .addr_i(pc),
    .instr_o(instr)
);

pc pc(
    .clk_i(clk_i),
    .jump_taken_i(JB_instr),
    .rst_i(rst_i),
    .jalr__instr_i(JALR_instr),
    .imm_ext_i(imm_ext),
    .jta_jalr_i(jalr_instr),
    .pc_o(pc),
    .pc_plus4_o(pc_plus_4)
);
endmodule

