// 编写函数 fun(int x, int y, intz, intn),
// 其功能是从x个红球、y个白球、z个黑球中任意取出n个, 且其中必须要有红球和白球, 要求输出所有方案。

#include <stdio.h>

void fun(int x, int y, int z, int n);

int main()
{
  fun(2, 3, 4, 3);
  return 0;
}

void fun(int x, int y, int z, int n)
{
  int i, j, k;
  for (i = 1; i <= x; i++) // 至少一个红球
  {
    for (j = 1; j <= y; j++) // 至少一个白球
    {
      for (k = 0; k <= z; k++) // 可以没有黑球
      {
        if (i + j + k == n)
        {
          printf("Red: %d, White: %d, Black: %d\n", i, j, k);
        }
      }
    }
  }
}
