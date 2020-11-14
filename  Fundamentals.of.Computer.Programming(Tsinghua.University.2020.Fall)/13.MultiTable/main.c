#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    int i, j;

    printf("        Multiplication Table\n");
    printf("---------------------------------------\n");
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j<i)
            {
                printf("    ");
            }
            else
            {
                printf("%4d", i * j);
            }
        }
        printf("\n");
    }
}
