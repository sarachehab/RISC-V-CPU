#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f pc.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace pc.sv --exe pc_tb.cpp

#build c++ project via make autormatically generated by Verilator
make -j -C obj_dir/ -f Vpc.mk Vpc

#run executable simulation file
obj_dir/Vpc