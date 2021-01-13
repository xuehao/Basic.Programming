#include <stdio.h>
#include <stdlib.h>

static int globalCount;
static double globalArray[10];
static char *globalPointer;

int main()
{
    /* 思考题
    double d1;
    double d2;
    double *dp1;
    double *dp2;
    dp1 = &d1;
    dp2 = &d2;
    *dp1 = 3.14;
    d2 = 2.71;
    dp1 = dp2;
    *dp1 -= d2;
    */

    int count;
    double array[10];
    char *cp;

    printf("Global int add: %lu\n", (long)&globalCount);
    printf("Global double array add: %lu\n", (long)globalArray);
    printf("Global char pointer add: %lu\n", (long)&globalPointer);
    printf("int add: %lu\n", (long)&count);
    printf("double array add: %lu\n", (long)array);
    printf("char pointer add: %lu\n", (long)&cp);

}
