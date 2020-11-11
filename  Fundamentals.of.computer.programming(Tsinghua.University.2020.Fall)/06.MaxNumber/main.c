#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int a, b, max;

    printf("This program gets two numbers and prints the max one.\n");

    printf("Enter the first number: ");
    a = GetIntegerFromKeyboard();
    printf("Enter the second number: ");
    b = GetIntegerFromKeyboard();

    max = a > b ? a : b;

    printf("The max number is %d.\n", max);

    return 0;
}
