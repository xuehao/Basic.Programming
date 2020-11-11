/**
 * Ex4: fib.c by xuehao
 * ----------
 * Latest modification on Jan 03, 2020
 */

#include <stdio.h>

#include "genlib.h"

#define INDEX 100000

/* Function prototypes */

int
Fib(int n);

/* Main program */

int
main(int argc, char const* argv[])
{
  int i;

  for (i = 0; i <= INDEX; i++) {
    printf("Fib(%2d) = %d\n", i, Fib(i));
  }

  return 0;
}

/*
 * Function: Fib
 * Usage: f = Fib(n);
 * ----------------------------------
 * Returns the given number's fib.
 */

int
Fib(int n)
{
  int i, pre1, pre2, currentFib;

  pre1 = 0;
  pre2 = 1;
  currentFib = pre1;

  for (i = 0; i <= n; i++) {
    if (i == 0) {
      currentFib = 0;
    } else if (i == 1) {
      currentFib = 1;
    } else {
      currentFib = pre1 + pre2;
      pre1 = pre2;
      pre2 = currentFib;
    }
  }

  return currentFib;
}
