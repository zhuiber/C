// (11) 有一个已排好序(升序) 的整型数组, 要求从键盘输入一整数按原来排序的规律将它插人数组中。并输出结果。
// 例如, 原来数据为1357, 需插人4, 插人后为1 3 4 5 7。

#include <stdio.h>
#define N 10

int main()
{
  int a[N] = {1, 3, 5, 7}, b = 4, i, j;
  int length = 4;

  for (i = 0; i < length; i++)
  {
    if (a[i] > b)
    {
      for (j = length; j > i; j--)
      {
        a[j] = a[j - 1];
      }
      a[i] = b;
      length++;
      break;
    }
  }

  if (i == length)
  {
    a[length] = b;
    length++;
  }

  for (i = 0; i < length; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
