#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int n, sum, count;

    printf("This program adds the numbers you entered.\n");

    sum = 0;
    count = 0;

    while(TRUE)
    {
        printf("Enter your numbers: ");
        n = GetIntegerFromKeyboard();

        if(n == 0) break;

        sum += n;
        count++;
    }

    printf("You have entered %d numbers.\n", count);
    printf("The total of the numbers is %d.\n", sum);

    return 0;
}
