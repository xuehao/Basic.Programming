/**
 * Ex7: digitReverse.c by xuehao
 * ----------
 * Latest modification on Dec 29, 2019
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main(int argc, char const* argv[])
{
  int n, rdigit;

  printf("This program reverses the digits in an integer.\n");
  printf("Enter a positive integer: ");
  n = GetInteger();

  rdigit = 0;
  while (n != 0) { // 终止条件考虑到负数的情况，与示例程序不同
    rdigit = rdigit * 10 + n % 10;
    n = n / 10;
  }

  printf("The reversed number is: %d\n", rdigit);

  return 0;
}
