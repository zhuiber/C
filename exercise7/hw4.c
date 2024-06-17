// (4) 编写一程序, 其功能是给一维数组a输入任意的6个整数, 假设为574891,
// 建立一个具有以下内容的方阵,
// 574891
// 157489
// 915748
// 891574
// 489157
// 748915

#include <stdio.h>
#define n 6

int main()
{
  int a[n] = {5, 7, 4, 8, 9, 1}, i, j, t;
  for (j = 0; j < n; j++)
    printf("%d", a[j]);
  printf("\n");
  for (i = 1; i < n; i++)
  {
    t = a[n - 1];
    for (j = 5; j > 0; j--)
    {
      a[j] = a[j - 1];
    }
    a[0] = t;
    for (j = 0; j < n; j++)
      printf("%d", a[j]);
    printf("\n");
  }
}