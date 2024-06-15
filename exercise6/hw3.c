// (3) 编程计算1! + 2! + 3! + … + 10!的值。
// 【参考答案】
//  算法1 : 用累加和算法,
//  累加项为term = term * i;
//  i = 1, 2,…, 10。term的初始值为 1. 使用单重循环完成。

#include <stdio.h>

int main()
{
  int i, sum, term;
  sum = 0;
  term = 1;
  for (i = 1; i <= 10; i++)
  {
    term *= i;
    sum += term;
  }
  printf("%d", sum);
  return 0;
}