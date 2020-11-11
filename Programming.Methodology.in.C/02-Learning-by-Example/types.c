/**
 * Task: types.c by xuehao
 * ---------------
 * Latest modification on Dec 26, 2019
 */

#include <float.h>
#include <limits.h>
#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main(int argc, char const* argv[])
{
  printf("The 'int' type ranges from %d to %d.\n"
         "The size of an int is %zu bytes.\n",
         INT_MIN,
         INT_MAX,
         sizeof(int));

  printf("----------\n");

  printf("The 'double' type ranges from %e to %e.\n"
         "The size of a double is %zu bytes.\n",
         DBL_MIN,
         DBL_MAX,
         sizeof(double));

  printf("----------\n");

  printf("The 'double' type ranges from %d to %d.\n"
         "The size of a double is %zu bytes.\n",
         CHAR_MIN,
         CHAR_MAX,
         sizeof(char));

  return 0;
}
