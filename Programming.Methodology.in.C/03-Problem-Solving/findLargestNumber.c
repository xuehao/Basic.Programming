/**
 * Ex14: findLargestNumber.c by xuehao
 * ----------
 * Latest modification on Dec 29, 2019
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main(int argc, char const* argv[])
{
  int number, largestNumber;

  printf("This program finds the largest integer in a list.\n"
         "Enter 0 to signal the end of the list:\n");

  largestNumber = 0;

  while (TRUE) {
    printf(" ? ");
    number = GetInteger();

    if (number > largestNumber) {
      largestNumber = number;
    }

    if (number == 0) { /* 终止条件 */
      break;
    }
  }

  printf("The largest value is %d\n", largestNumber);

  return 0;
}
