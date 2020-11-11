/**
 * Ex11: isoscelesTriangle.c by xuehao
 * ----------
 * Latest modification on Dec 30, 2019
 */

#include <stdio.h>

#include "genlib.h"

#define ROW 2

int
main(int argc, char const* argv[])
{
  int i, j, k;

  for (i = 0; i < ROW; i++) {
    for (j = i + 1; j < ROW; j++) {
      printf(" ");
    }

    for (k = 0; k < 2 * i + 1; k++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
