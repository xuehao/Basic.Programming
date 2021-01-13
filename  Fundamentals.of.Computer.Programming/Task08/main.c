#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#include "zylib.h"

double GetDouble(CSTRING prompt);
STRING GetString(CSTRING prompt);
BOOL isPrime(int number);

int main()
{
    printf("Hello world!\n");
    if(isPrime(GetIntegerFromKeyboard()))
    {
        printf("This is Prime.\n");
    }
    else
    {
        printf("This is not prime.\n");
    }
    return 0;
}

BOOL isPrime(int number)
{
    int i;
    for(i = 2; i < (int)sqrt(number); i++)
    {
        if(number % i == 0)
            return 0;
    }
    return 1;
}

double GetDouble(CSTRING prompt)
{
    printf(prompt);
    return GetRealFromKeyboard();
}

STRING GetString(CSTRING prompt)
{
    printf(prompt);
    return GetStringFromKeyboard();
}
