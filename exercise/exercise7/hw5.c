// (5) 输入5x5阶的矩阵, 编程实现
// 求两条对角线上的各元素之和
// 求两条对角线上行、列下标均为偶数的各元素之积，

#include <stdio.h>
#define n 5

int main()
{
  int a[n][n] = {
      {1, 2, 3, 4, 5},
      {1, 2, 3, 4, 5},
      {1, 2, 3, 4, 5},
      {1, 2, 3, 4, 5},
      {1, 2, 3, 4, 5}};

  int i, sum = 0, product = 1;

  for (i = 0; i < n; i++)
  {
    sum += a[i][i];
  }
  for (i = 0; i < n; i++)
  {
    sum += a[i][n - 1 - i];
  }
  for (i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      product *= a[i][i];
    }
    if (i % 2 == 0 || (n - 1 - i) % 2 == 0)
    {
      product *= a[i][n - 1 - i];
    }
  }
  printf("%d\n%d\n", sum, product);
  printf("%d\n%d\n", (1 + 2 + 3 + 4 + 5) * 2, 1 * 3 * 5 * 3 * 5);
}