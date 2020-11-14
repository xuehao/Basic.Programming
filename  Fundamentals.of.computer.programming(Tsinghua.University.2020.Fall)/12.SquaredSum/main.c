#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int n, sum, i;

    printf("Enter the max number: ");
    n = GetIntegerFromKeyboard();

    sum = 0;

    for(i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    printf("The squared sum is %d.\n", sum);

    return 0;
}
