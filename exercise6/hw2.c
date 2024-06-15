// (2) 编程计算1x2x3+3x4x5+…+99x100x101的值。
// 【设计思想】用累加和算法, 通项公式为term = i * (i + 1) * (i + 2);
// i = 1, 3,…, 99;
// 或者公式为term = (i - 1) * i * (i + 1);
// i = 2, 4.…, 100;
// 步长为2。

#include <stdio.h>

int main()
{
  int i, sum;
  sum = 0;
  for (i = 1; i <= 99; i += 2)
  {
    sum += i * (i + 1) * (i + 2);
  }
  printf("%d", sum);
  return 0;
}