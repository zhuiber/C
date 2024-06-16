// (6) 编程打印如下形式的杨辉三角形

#include <stdio.h>
#define n 6

int main()
{
  int a[n][n], i, j;
  for (i = 0; i < n; i++)
  {
    a[i][0] = 1;
    a[i][i] = 1;
    for (j = 1; j < i; j++)
      a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
      printf("  ");
    for (j = 0; j <= i; j++)
      printf("%4d", a[i][j]);
    printf("\n");
  }

  return 0;
}