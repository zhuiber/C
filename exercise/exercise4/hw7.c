// (7) 编写程序, 从键盘输入一个字符, 求出与该字符前后相邻的两个字符, 按从小到大的顺序输出这三个字符的 ASCII码。

#include <stdio.h>

int main()
{
  char a, b, c;
  scanf("%c", &b);
  a = b - 1;
  c = b + 1;
  printf("%c%c%c", a, b, c);
  return 0;
}