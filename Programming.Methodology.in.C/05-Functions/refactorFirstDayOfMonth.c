/**
 * refactorFirstDayOfMonth.c by xuehao
 * ----------
 * Latest modification on Jan 01, 2020
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

#define Sunday 0
#define Monday 1
#define Tuesday 2
#define Wednesday 3
#define Thursday 4
#define Friday 5
#define Saturday 6

int
FirstDayOfMonth(int month, int year);
int
MonthDays(int month, int year);
bool
IsLeapYear(int year);

int
main(int argc, char const* argv[])
{
  int month, year;

  printf("输入年：");
  year = GetInteger();
  printf("输入月：");
  month = GetInteger();

  printf(
    "%d年%d月的第一天是星期%d\n", year, month, FirstDayOfMonth(month, year));

  return 0;
}

/**
 * Function: FirstDayOfMonth
 * Usage: weekday = FirstDayOfMonth(month, year);
 * ---------------------------
 * 算出1900年1月1日至给定月份的总天数
 * 对总天数用7取模数，得到星期的偏移量
 */

int
FirstDayOfMonth(int month, int year)
{
  int days, offset, weekday, i;

  weekday = Monday; // 1900年1月1日的星期数

  days = 0;
  for (i = 1900; i < year; i++) {
    if (IsLeapYear(i)) {
      days += 366;
    } else {
      days += 365;
    }
  }
  for (i = 1; i < month; i++) {
    days += MonthDays(i, year);
  }
  printf("自1900年1月1日起已过%d天\n", days);

  offset = days % 7; // 计算星期偏移量

  return (weekday + offset);
}

/* 依赖函数 */
int
MonthDays(int month, int year)
{
  switch (month) {
    case 2:
      if (IsLeapYear(year))
        return (29);
      return (28);
    case 4:
    case 6:
    case 9:
    case 11:
      return (30);
    default:
      return (31);
  }
}

bool
IsLeapYear(int year)
{
  return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}
