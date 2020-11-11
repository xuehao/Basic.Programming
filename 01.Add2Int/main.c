#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("这个程序计算两个整数和。\n");

    printf("第一个整数：");
    scanf("%d", &a);
    printf("第二个整数：");
    scanf("%d", &b);

    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}
