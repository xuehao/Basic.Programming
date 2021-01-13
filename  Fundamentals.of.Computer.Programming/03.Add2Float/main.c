#include <stdio.h>

int main()
{
    float a, b, sum;

    printf("这个程序计算两个float浮点数的和。\n");

    printf("第一个float数：");
    scanf("%f", &a);
    printf("第二个float数：");
    scanf("%f", &b);

    sum = a + b;
    printf("%f + %f = %f\n", a, b, sum);

    return 0;
}
