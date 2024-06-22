// (3) 从键盘输入10个整数, 编程实现将其中最大数与最小数的位置对换后, 再输出调整后的数组

#include <stdio.h>
#define n 10

int main()
{
  int a[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i, max = 0, min = 0, t;
  for (i = 0; i < n; i++)
  {
    if (a[max] < a[i])
      max = i;
    if (a[min] > a[i])
      min = i;
  }
  t = a[max];
  a[max] = a[min];
  a[min] = t;
  for (i = 0; i < n; i++)
  {
    printf("%d", a[i]);
  }
}