#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int year;

    printf("This program determines whether a year is a leap year.\n");

    printf("Enter the year: ");
    year = GetIntegerFromKeyboard();

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("This year is a leap year.\n");
    }
    else
    {
        printf("This year is not a leap year.\n");
    }

    return 0;
}
