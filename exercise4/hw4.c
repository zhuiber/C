// (4) 编程从键盘输人任意一个十六进制负整数, 以输入的形式输出。例如, 输入 - FA98, 输出 - FA98。

#include <stdio.h>

int main()
{
  int a;
  scanf("%x", &a);
  printf("-%x", -a);
  return 0;
}