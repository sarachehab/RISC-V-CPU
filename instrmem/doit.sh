#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f instrmem.vcd

#run verilator to translate verilog into c++, including c++ testbench
verilator -Wall --cc --trace instrmem.sv --exe instrmem_tb.cpp

#build c++ porject viamake automatically generated by verilator 
make -j -C obj_dir/ -f Vinstrmem.mk Vinstrmem

#run executable simulation file 
echo -e "\nrunning simulation\n"
obj_dir/Vinstrmem
echo -e "\\ncomplete simulation\n"

