#include <stdio.h>

#include "zylib.h"

int Add(int x, int y);
int Compare(int x, int y);
void Swap(int x, int y); // 可以用全局变量或指针解决
BOOL isLeap(int year);
void Welcome();
int GetInteger(CSTRING prompt);
double GetReal(CSTRING prompt);

int main()
{
    int a, b, sum;
    Welcome();
    a = GetInteger("Enter your first number: ");
    b = GetInteger("Enter your second number: ");
    sum = a + b;
    printf("The sum of %d and %d is %d.\n", a, b, sum);

    printf("a is %d, b is %d.\n", a, b);
    printf("Now swap a and b....\n");
    Swap(a, b);
    printf("New a is %d, new b is %d.\n", a, b);
}

double GetReal(CSTRING prompt)
{
    printf(prompt);
    return GetRealFromKeyboard();
}

int GetInteger(CSTRING prompt)
{
    printf(prompt);
    return GetIntegerFromKeyboard();
}

void Welcome()
{
    printf("This program adds two numbers from usrs.\n");
}

BOOL isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Bug 版本
void Swap(int x, int y)
{
    int t;
    /*
    t = x;
    x = y;
    y = t;
    */
    t = x, x = y, y = t; // 逗号表达式
    return; // 无返回值直接忽略
}

int Compare(int x, int y)
{
    //int t
    if(x > y)
    {
        //t = 1;
        return 1;
    }
    else if (x < y)
    {
        //t = -1;
        return -1;
    }
    else
    {
        //t = 0;
        return 0;
    }
    //return t;
}

int Add(int x, int y)
{
    /*
    int t;
    t = x + y;
    return t;
    */
    return (x + y);
}
