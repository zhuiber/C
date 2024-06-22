// (2) 设计函数MaxCommonFactor(), 计算两个正整数的最大公约数。

#include <stdio.h>

int MaxCommonFactor(int x, int y);

int main()
{
  int x = 15, y = 10;
  printf("%d\n", MaxCommonFactor(x, y));
  printf("%d\n%d", x, y);
}

int MaxCommonFactor(int x, int y)
{
  if (x <= 0 || y <= 0)
    return -1;
  while (x != y)
  {
    if (x > y)
      x = x - y;
    else if (y > x)
      y = y - x;
  }
  return x;
}
