#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "genlib.h"
#include "strlib.h"
#include "simpio.h"

void GetDate(int *dp, int *mp, int *yp);

int main()
{
    int day, month, year;

    GetDate(&day, &month, &year);

    printf("Day = %d\nMonth = %d\nYear = %d\n", day, month, year);
}

void GetDate(int *dp, int *mp, int *yp)
{
    string date, day, month, year;
    string const FLAG = "-";
    int i;

    string monthArray[12] = {"Jan", "Feb", "Mar", "Apr", \
                             "May", "Jun", "Jul", "Aug", \
                             "Sep", "Oct", "Nov", "Dec"
                            };

    printf("Enter a date as dd-mmm-yy: ");
    date = GetLine();

    // strtok 函数的使用
    day = strtok(date, FLAG);
    month = strtok(NULL, FLAG);
    year = strtok(NULL, FLAG);

    i = 0;
    while(!StringEqual(month, monthArray[i]))
    {
        i++;
    }

    *dp = StringToInteger(day);
    *mp = ++i;
    *yp = StringToInteger(year);
}
