#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

typedef enum {SUN, MON, TUE, WED, THU, FRI, SAT} WEEKDAY;

int main()
{
    int first_day, offset, date;
    WEEKDAY day;

    first_day = 1;
    offset = FRI - first_day % 7; // 1号为周五

    printf("Enter the date from 1 to 31: ");
    date = GetIntegerFromKeyboard();
    if(date < 1 || date > 31)
    {
        printf("You entered wrong number.\n");

        return 1; // 错误退出
    }
    else
    {
        day = (WEEKDAY)((date + offset) % 7);
        printf("Calendar: 2016-07\n");
        printf("--------------------\n");
        printf("SU MO TU WE TH FR SA\n");
        printf("--------------------\n");

        /*
        if(day == SUN)
        {
            printf("%2d\n", date);
        }
        else if(day == MON)
        {
            printf("%5d\n", date);
        }
        else if(day == TUE)
        {
            printf("%8d\n", date);
        }
        else if(day == WED)
        {
            printf("%11d\n", date);
        }
        else if(day == THU)
        {
            printf("%14d\n", date);
        }
        else if(day == FRI)
        {
            printf("%17d\n", date);
        }
        else
        {
            printf("%20d\n", date);
        }
        */
        switch(day)
        {
        case SUN:
            printf("%2d\n", date);
            break;
        case MON:
            printf("%5d\n", date);
            break;
        case TUE:
            printf("%8d\n", date);
            break;
        case WED:
            printf("%11d\n", date);
            break;
        case THU:
            printf("%14d\n", date);
            break;
        case FRI:
            printf("%17d\n", date);
            break;
        case SAT:
            printf("%20d\n", date);
            break;
        default:
            ;
        }
    }

    return 0;
}
