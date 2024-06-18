// (9) 编写一递归函数计算组合Cmn
#include <stdio.h>

float fun(int m, int n);
int main()
{
  int a;
  a = fun(10, 2);
  printf("%d", a);
}

float fun(int m, int n)
{
  if (m == n || n == 0)
    return 1;
  return (float)m / (m - n) * fun(m - 1, n);
}