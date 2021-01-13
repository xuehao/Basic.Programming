#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int a, result;

    printf("This program will transfer odd to even.\n");

    printf("Enter your number: ");
    a = GetIntegerFromKeyboard();

    if(a % 2 == 0)
    {
        printf("The number %d is even.\n", a);
    }
    else
    {
        result = a * 3 + 1;
        printf("Transfer %d to even number %d\n", a, result);
    }

    return 0;
}
