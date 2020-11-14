#include <stdio.h>

int main()
{
    int a, b, sum, diff, pro, quo;

    printf("The program gets two integers, and calculates "
           "their sum, difference, product and quotient.\n");

    printf("The first number: ");
    scanf("%d", &a);
    printf("The second number: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    pro = a * b;
    quo = a / b;

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, diff);
    printf("%d * %d = %d\n", a, b, pro);
    printf("%d / %d = %d\n", a, b, quo);

    return 0;
}
