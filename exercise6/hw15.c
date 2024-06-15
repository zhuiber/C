// (15) 编程将一个正整数分解质因数。例如, 输人90打印出90 = 2x3x3X5。

#include <stdio.h>

int main()
{
  int n, i;
  scanf("%d", &n);
  printf("%d = ", n);
  for (i = 2; i <= n; i++)
  {
    while (n != i)
    {
      if (n % i == 0)
      {
        printf("%d*", i);
        n /= i;
      }
      else
        break;
    }
  }
  printf("%d", n);
  return 0;
}