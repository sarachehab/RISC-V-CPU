#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f controlunit.vcd

#run verilator to translate verilog into c++, including c++ testbench
verilator -Wall --cc --trace controlunit.sv --exe controlunit_tb.cpp

#build c++ porject viamake automatically generated by verilator 
make -j -C obj_dir/ -f Vcontrolunit.mk Vcontrolunit

#run executable simulation file 
echo -e "\nrunning simulation\n"
obj_dir/Vcontrolunit
echo -e "\\ncomplete simulation\n"

