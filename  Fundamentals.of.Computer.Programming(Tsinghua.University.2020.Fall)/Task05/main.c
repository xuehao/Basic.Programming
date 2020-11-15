#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int line, split_num, i, white1, white2, star1, star2;

    printf("Enter your line: ");
    line = GetIntegerFromKeyboard();
    printf("Enter your spit(>=0): ");
    split_num = GetIntegerFromKeyboard();

    for(i=1; i<=line; i++)
    {
        /* Print white space*/
        for(white1=(line-i); white1>0; white1--)
        {
            printf(" ");
        }

        /* Print stars*/
        for(star1=(2*i-1); star1>0; star1--)
        {
            printf("*");
        }

        /* Print split*/
        for(white2 = split_num; white2>0; white2--)
        {
            printf(" ");
        }

        /* Print stars*/
        for(star2= (2*(line-i)+1); star2>0; star2--)
        {
            printf("*");
        }

        printf("\n");
    }
}
