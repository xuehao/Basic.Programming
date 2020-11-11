#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    STRING china, iceland;
    double area1, area2;
    double pop1, pop2;
    double gdp1, gdp2;

    china = "China";
    area1 = 960.00;
    pop1 = 135700.00;
    gdp1 = 9240.00;
    iceland = "Iceland";
    area2 = 10.30;
    pop2 = 32.30;
    gdp2 = 15.33;

    printf("---------------------------------------------------\n");
    printf("COUNTRY    AREA(10K km2)   POP.(10K)  GDP(Billion$)\n");
    printf("---------------------------------------------------\n");
    printf("%-10s %13.2lf   %9.2lf  %-13.2lf\n", china, area1, pop1, gdp1);
    printf("%-10s %13.2lf   %9.2lf  %-13.2lf\n", iceland, area2, pop2, gdp2);
    printf("---------------------------------------------------\n");

    return 0;
}
