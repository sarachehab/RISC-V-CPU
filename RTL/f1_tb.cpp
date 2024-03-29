#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env)
{
  int simcyc;
  int tick;

  Verilated::commandArgs(argc, argv);
  Vcpu *top = new Vcpu;
  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("f1.vcd");

  if (vbdOpen() != 1)
    return (-1);
  vbdHeader("Single F1");
  vbdSetMode(1); // Flag mode set to one-shot

  top->clk_i = 1;
  top->rst_i = 1;
  top->trigger_i = 0;

  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
  {
    for (tick = 0; tick < 2; tick++)
    {
      tfp->dump(2 * simcyc + tick);
      top->clk_i = !top->clk_i;
      top->eval();
    }
    top->trigger_i = (vbdValue() > 50);
    top->rst_i = (simcyc > 3) ? vbdFlag() : 1;

    vbdBar(top->a0_o & 0xFF);

    vbdCycle(simcyc);

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
      break;
  }

  vbdClose();
  tfp->close();
  printf("Exiting\n");
  exit(0);
}
