#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 关于64bit整型：
     * 一般来说，64位整型的定义方式有long long和__int64两种(VC还支持_int64)
     * 而输出到标准输出方式有printf(“%lld”,a)，printf(“%I64d”,a)，和cout << a三种方式。
     */
    printf("Values of type char require %I64d bytes.\n", sizeof(char));
    printf("Values of type int require %I64d bytes.\n", sizeof(int));
    printf("Values of type short require %I64d bytes.\n", sizeof(short));
    printf("Values of type long require %I64d bytes.\n", sizeof(long));
    printf("Values of type float require %I64d bytes.\n", sizeof(float));
    printf("Values of type double require %I64d bytes.\n", sizeof(double));
}
