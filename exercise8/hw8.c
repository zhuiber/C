// 编写一递归函数求斐波那契数列的前40项:

#include <stdio.h>

void SUM(int n);

int main()
{
  SUM(40);
}

void SUM(int n)
{
  int a[n], i, sum = 2;
  a[0] = 1;
  a[1] = 1;
  if (n > 2)
    for (i = 2; i < n; i++)
      a[i] = a[i - 1] + a[i - 2];

  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
}