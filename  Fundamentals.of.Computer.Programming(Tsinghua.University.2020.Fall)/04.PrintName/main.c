/*
 * Mr.X edited on Nov 2, 2020
 */
#include <stdio.h>

#include "zylib.h"

int
main()
{
    STRING name;

    printf("This program gives a greeting to user.\n");

    printf("Enter your name: ");
    name = GetStringFromKeyboard();

    printf("Hello, %s\n", name);
}
