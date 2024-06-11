// (10) 编写程序, 读入三个整数给a、b、c,
// 然后交换它们中的数, 把a中原来的值给b, b中原来的值给c，c中原来的值给a, 且输出改变后的a、b、c的值。
// 【设计思想】利用临时变量t保存c的值, 然后依次将b的值保存到c中, a的值保存到b中, t的值保存到a中。

#include <stdio.h>

int main()
{
  int a, b, c, t;
  scanf("%d%d%d", &a, &b, &c);
  t = c;
  c = b;
  b = a;
  a = t;
  printf("%d%d%d", a, b, c);
  return 0;
}