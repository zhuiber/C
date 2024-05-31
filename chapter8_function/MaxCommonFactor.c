// 计算两个整数的最大公约数

#include <stdio.h>

int max_common_factor(int m, int n);

int main()
{
  int m = 12, n = 18;
  printf("The max common factor of %d and %d is %d\n", m, n, max_common_factor(m, n));
  return 0;
}

int max_common_factor(int m, int n)
{
  int temp;
  while (n != 0)
  {
    temp = m % n;
    m = n;
    n = temp;
  }
  return m;
}