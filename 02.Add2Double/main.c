#include <stdio.h>

int main()
{
    double a, b, sum;

    printf("这个程序计算两个float浮点数的和。\n");

    printf("第一个double数：");
    scanf("%lf", &a);
    printf("第二个double数：");
    scanf("%lf", &b);

    sum = a + b;
    printf("%lf + %lf = %lf\n", a, b, sum);

    return 0;
}
