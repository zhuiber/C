// (5) 利用pi/2 = 2/1 * 2/3 * 4/3 * 4/5 * 6/5 * 6/7 *... 前 100 项之积计算π的值。
// 【设计思想】采用累乘积算法, 累乘项为term = n * n / ((n - l) * (n + 1));
// n = 2.4…. 100;
// 步长为2。

#include <stdio.h>

int main()
{
  int i;
  double sum = 1.0, term = 1.0, pi;
  for (i = 2; i <= 100; i += 2)
  {
    term = (double)i * i / ((i - 1) * (i + 1));
    sum *= term;
  }
  pi = sum * 2;
  printf("Calculated value of pi: %f\n", pi);
  return 0;
}
