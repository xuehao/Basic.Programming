#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

BOOL isLeap(int year);

int main()
{
    int year, month;

    printf("Enter the year: ");
    year = GetIntegerFromKeyboard();
    printf("Enter the month: ");
    month = GetIntegerFromKeyboard();

    if(month < 1 || month > 12 )
    {
        printf("You entered a wrong month.\n");
        return 1;
    }

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("This month has 31 days.\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("This month has 30 days.\n");
        break;
    case 2:
        /*
        if(isLeap(year)){
            printf("This month has 29 days.\n");
        } else {
            printf("This month has 28 days.\n");
        }
        */
        printf("This month has %d days.\n", 28 + (int)isLeap(year));
        break;
    default:
        ;
    }

    return 0;
}

BOOL isLeap(int year)
{
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
