#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    double capital, rate, balance;

    printf("Enter your capital(CNY): ");
    capital = GetRealFromKeyboard();
    printf("Enter the annual interest rate: ");
    rate = GetRealFromKeyboard();

    balance = (1 + rate / 100) * capital;

    printf("Your balance after one year: %.2f\n", balance);
}
