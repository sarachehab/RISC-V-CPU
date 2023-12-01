#!/bin/sh

#clear terminal for ease of use: 
clear

#cleanup
rm -rf obj_dir
rm -f controlUnit_top.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace controlUnit_top.sv --exe controlUnit_top_tb.cpp

#build c++ project via make autormatically generated by Verilator
make -j -C obj_dir/ -f VcontrolUnit_top.mk VcontrolUnit_top

#run executable simulation file
echo -e "\nrunning simulation\n"
obj_dir/VcontrolUnit_top
echo -e "\nending simulation\n"