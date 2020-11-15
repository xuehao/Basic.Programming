#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

typedef enum {SUN, MON, TUE, WED, THU, FRI, SAT} WEEKDAY;

int main()
{
    int first_day, offset, date, i;
    WEEKDAY day;

    first_day = FRI;
    offset = first_day % 7 - 1; // 1号为周五 = 4
    //printf("%d\n", offset);

    printf(" Calendar: 2015-05\n");
    printf("---------------------\n");
    printf(" SU MO TU WE TH FR SA\n");
    printf("---------------------\n");

    for(i=0; i<=offset; i++)
    {
        printf("   ");
    }

    for(date=1; date<=31; date++)
    {
        day = (WEEKDAY)((date + offset) % 7);

        printf("%3d", date);

        if(day == SAT) printf("\n");
    }

    printf("\n---------------------\n");
}
