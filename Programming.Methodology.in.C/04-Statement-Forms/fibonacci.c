/**
 * Ex8: fibonacci.c by xuehao
 * ----------
 * Latest modification on Dec 30, 2019
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

#define INDEX 15

int
main(int argc, char const* argv[])
{
  int i, pre1, pre2, currentFib;

  printf("This program lists the Fibonacci sequence.\n");

  pre1 = 0;
  pre2 = 1;

  for (i = 0; i <= INDEX; i++) {
    if (i == 0) {
      printf("F(%d) = %d\n", i, pre1);
    } else if (i == 1) {
      printf("F(%d) = %d\n", i, pre2);
    } else {
      currentFib = pre1 + pre2;
      pre1 = pre2;
      pre2 = currentFib;
      printf("F(%d) = %d\n", i, currentFib);
    }
  }

  return 0;
}
