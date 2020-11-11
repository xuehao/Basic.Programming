/**
 * Ex5: square.c by xueaho
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

  for (i = LOWER; i <= UPPER; i++) {
    printf("%d squared is %d\n", i, i * i);
  }

  return 0;
}
