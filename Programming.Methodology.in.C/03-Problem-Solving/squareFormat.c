/**
 * Ex11: squareFormat.c by xueaho
 * ----------
 * Latest modification on Dec 29, 2019
 */

#include <stdio.h>

#include <genlib.h>
#include <simpio.h>

#define LOWER 0
#define UPPER 10

int
main(int argc, char const* argv[])
{
  int i;

  printf("Number  Square  Cube\n");

  for (i = LOWER; i <= UPPER; i++) {
    printf("%6d  %6d  %4d\n", i, i * i, i * i * i);
  }

  return 0;
}
