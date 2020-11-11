/**
 * Ex10: rightTriangle.c by xuehao
 * ----------
 * Latest modification on Dec 30, 2019
 */

#include <stdio.h>

#include "genlib.h"

#define ROW 8

int
main(int argc, char const* argv[])
{
  int i, j;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
