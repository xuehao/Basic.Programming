/**
 * Ex8: fibonacci2.c by xuehao
 * ----------
 * Latest modification on Dec 30, 2019
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

#define UPPER 10000

int
main(int argc, char const* argv[])
{
  int i, pre1, pre2, currentFib;

  printf("This program lists the Fibonacci sequence.\n");

  pre1 = 0;
  pre2 = 1;
  currentFib = pre1;

  i = 0;
  while (TRUE) {
    if (i == 0) {
      printf("F(%d) = %d\n", i, pre1);
    } else if (i == 1) {
      printf("F(%d) = %d\n", i, pre2);
    } else {
      currentFib = pre1 + pre2;
      pre1 = pre2;
      pre2 = currentFib;
      if (currentFib >= UPPER)
        break;
      printf("F(%d) = %d\n", i, currentFib);
    }

    i++;
  }

  /*for (i = 0; TRUE; i++) {
    if (i == 0) {
      printf("F(%d) = %d\n", i, pre1);
    } else if (i == 1) {
      printf("F(%d) = %d\n", i, pre2);
    } else {
      currentFib = pre1 + pre2;
      pre1 = pre2;
      pre2 = currentFib;
      if (currentFib >= UPPER)
        break;
      printf("F(%d) = %d\n", i, currentFib);
    }
  }*/

  return 0;
}
