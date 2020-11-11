# Chapter 4 Notes

- C 语言语句分为：简单语句和控制语句

- 简单语句：一个语句由一个表达式和分号构成

- 赋值语句

  - 赋值嵌套：因为赋值语句是一个表达式，而表达式本身是一个值，所以赋值语句可以嵌套在其他表达式中。

  ```c
  (x = 6) * (x = 7)
  ```

  - 多重赋值：C 语言赋值操作是从右到左结合的

  ```c
  n1 = n2 = n3 = 0;
  ```

- 控制语句：条件和迭代两种

  - 嵌套：一个控制语句嵌入另一个控制语句，这是现代语言的重要特性

- 布尔型数据：通常布尔变量，称为标志（flag）

  - 关系运算符：通过原子类型生成布尔值，字符串不可以参与运算。

  - 逻辑运算符：操作布尔值，生成新的布尔值。

  - 简化求值：只要结果确定，就停止计算的方法

  - 监护条件：通常为了防止后面部分计算出错，会先计算一个条件测试

  - 布尔表达中的冗余情况

  ```c
  done = (itemsRemaining == 0) // 没必要写成 if-else 形式，增进判断
  ```

- if 语句

  - 单行语句:

  ```c
  if (condition) statement
  ```

  - 多行语句:

  ```c
  if (condition) {
    statement
  }

  ```

  - if/else 语句:

  ```c
  if (condition) statement else statement
  ```

  注意悬空 else 问题。

  - 联级语句

  ```c
  if (condition) {
    statement
  } else if (condition) {
    statement
  } else {
    statement
  }
  ```

- ?:运算符

```c
(condition) ? expression1 : expression2
```

C 语言没有内建输出布尔值机制：可以使用该运算符模拟

- switch 语句

```c
switch (expression) {
  case c1:
    statements1;
    break;
  case c2:
    statements2;
    break;
  ...
  default:
    statements3;
    break;
}
```

switch 语句只能使用整型或类似整型的常量标识；字符串或变量不可使用。

- while 语句

```c
while (condition) {
  statements
}
```

- 解决循环半途退出问题

```c
while (TRUE) {
  statements1

  if(condition) break;

  statements2
}
```

学会用 break 解决半途退出问题的人，能更好的写程序。

- for 语句

```c
for (init; test; step) {
  statement
}
```
