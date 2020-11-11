/**
 * Ex11: yesorno.c by xuehao
 * ----------
 * Latest modification on Jan 04, 2020
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"
#include "strlib.h"

bool
GetYesOrNo(string greetings);

int
main(int argc, char const* argv[])
{
  ;
  printf("Your anser is %s\n",
         GetYesOrNo("Would you like to play again?") ? "yes" : "no");
  return 0;
}

/**
 * Function: GetYesOrNo
 * Usage: b = GetYesOrNo(greeting);
 * ---------------------------
 * 获取输入yes或no，返回布尔值
 */
bool
GetYesOrNo(string greetings)
{
  string flag;

  while (TRUE) {
    printf("%s ", greetings);
    flag = GetLine();
    if (StringEqual(flag, "yes")) {
      return TRUE;
    } else if (StringEqual(flag, "no")) {
      return FALSE;
    } else {
      printf("Please answer yes or no.\n");
    }
  }
}
