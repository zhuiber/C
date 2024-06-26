// (9) 输入任意一个三位数, 将其各位数字反序输出(例如输入123, 输出321)
// 【设计思想】利用整除及取余的方法将输人的三位整数进行分解, 分别求得其百位数十位数及个位数,
// 然后按要求重新组织成一个三位数。

#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d", &a);
  b = a / 100;
  b += ((a - (a / 100) * 100) / 10) * 10;
  b += (a % 10) * 100;
  printf("%d", b);
  return 0;
}