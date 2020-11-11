/**
 * Ex4: balance.c by xuehao
 * ---------------
 * Latest modification on Dec 26, 2019
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main(int argc, char const* argv[])
{
  double balance, rate;

  printf("Interest calculation program.\n");

  printf("Starting balance: ");
  balance = GetReal();

  printf("Annual interest rate percentage: ");
  rate = GetReal();

  balance = balance * (1 + rate / 100);

  printf("Balance after one year: %g\n", balance);

  return 0;
}
