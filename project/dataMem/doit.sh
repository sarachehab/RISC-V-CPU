#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f data_memory.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace data_memory.sv --exe data_memory_tb.cpp

#build c++ project via make autormatically generated by Verilator
make -j -C obj_dir/ -f Vdata_memory.mk Vdata_memory

#run executable simulation file
obj_dir/Vdata_memory