/**
 * Ex5: RaiseInToPower.c by xuehao
 * ----------
 * Latest modification on Jan 01, 2020
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
RaiseInToPower(int base, int power);

int
main(int argc, char const* argv[])
{
  int base, power, i;

  base = 2;
  power = 10;

  for (i = 0; i <= power; i++) {
    printf("%d power %2d is %8d\n", base, i, RaiseInToPower(base, i));
  }

  printf("%d power %2d is %8d\n", 0, 0, RaiseInToPower(0, 0));

  return 0;
}

/**
 * Function: RaiseInToPower
 * Usage: result = RaiseInToPower(base, power);
 * ---------------------------
 * 计算给定基数给定幂的结果
 */
int
RaiseInToPower(int base, int power)
{
  int result, i;

  result = 1;

  for (i = 0; i < power; i++) {
    result *= base;
  }

  return result;
}
