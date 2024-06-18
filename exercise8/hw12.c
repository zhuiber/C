// (12) 编写兩数fun(int x, int y, intz, intn), 其功能是从x个红球、y个白球、z个黑球中任意取出n个球,
//  且其中必须要有红球和白球, 要求输出所有方案

#include <stdio.h>

void fun(int x, int y, int z, int n);

int main()
{
  fun(3, 4, 5, 10);
  return 0;
}

void fun(int x, int y, int z, int n)
{
  int i, j, k;
  for (i = 1; i <= x; i++)
    for (j = 1; j <= y; j++)
      for (k = 0; k <= z; k++)
        if (i + j + k == n)
          printf("%d,%d,%d\n", i, j, k);
}
