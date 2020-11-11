#include <stdio.h>
#include <stdlib.h>

#include "zylib.h"

int main()
{
    STRING pro1, pro2, pro3;
    double area1, area2, area3;
    double pop1, pop2, pop3;

    pro1 = "Beijing";
    pro2 = "Shanghai";
    pro3 = "Suzhou";

    area1 = 580.03;
    area2 = 430.18;
    area3 = 468.97;

    pop1 = 10263.35;
    pop2 = 12039.98;
    pop3 = 8274.56;

    printf("Province  |  Area  | Population\n");
    printf("%-10.13s %8.2lf %-.2lf\n", pro1, area1, pop1);
    printf("%-10.13s %8.2lf %-.2lf\n", pro2, area2, pop2);
    printf("%-10.13s %8.2lf %-.2lf\n", pro3, area3, pop3);

    return 0;
}
