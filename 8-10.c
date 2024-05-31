// 组合数计算

#include <stdio.h>
#define N 10
#define M 5

int C(int n, int m);
long factorial(int n);

int main()
{
  printf("C(%d, %d) = %d\n", N, M, C(N, M));
  return 0;
}

int C(int n, int m)
{
  return factorial(n) / (factorial(m) * factorial(n - m));
}

long factorial(int n)
{
  long result = 1;
  int i;
  for (i = 1; i <= n; i++)
  {
    result *= i;
  }
  return result;
}
