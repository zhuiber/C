// 求N的阶乘

#include <stdio.h>
#define N 10

long my_factorial(int n);

int main()
{
  int i;
  for (i = 0; i <= N; i++)
  {
    printf("%d! = %ld\n", i, my_factorial(i));
  }
  return 0;
}

long my_factorial(int n)
{
  long result = 1;
  int i;
  for (i = 1; i <= n; i++)
  {
    result *= i;
  }
  return result;
}
