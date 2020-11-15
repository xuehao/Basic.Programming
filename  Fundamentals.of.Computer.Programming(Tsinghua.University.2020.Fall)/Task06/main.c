#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int i, j;

    printf("            Multiplication Table\n");
    printf("-------------------------------------------\n");
    printf("      1   2   3   4   5   6   7   8   9\n");
    printf("-------------------------------------------\n");

    for(i=1; i<=9; i++)
    {
        printf("%2d ", i);
        for(j=1; j<=i; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}
