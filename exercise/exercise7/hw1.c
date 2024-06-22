// 编程实现从键盘任意输入20个整数, 计算其中所有非负数之和。

#include <stdio.h>
#define n 3

int main()
{
  int a[n], sum, i;
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    if (a[i] < 0)
      continue;
    else
      sum += a[i];
  }
  printf("%d", sum);
  system("pause");
  return 0;
}