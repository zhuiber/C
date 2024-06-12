// (3) 输人任意三个数num1、num2、num3, 按从小到大的顺序排序输出。
// 【设计思想】使用if - else结构将三个数两两之间进行比较。

#include <stdio.h>

int main()
{
  int num1, num2, num3;
  scanf("%d%d%d", &num1, &num2, &num3);
  if (num1 < num2)
    if (num1 < num3)
    {
      printf("%d", num1);
      if (num2 < num3)
        printf("%d%d", num2, num3);
      else
        printf("%d%d", num3, num2);
    }
    else
      printf("%d%d%d", num3, num2, num1);
  else if (num2 < num3)
  {
    printf("%d", num2);
    if (num1 < num3)
      printf("%d%d", num1, num3);
    else
      printf("%d%d", num3, num1);
  }
  else
    printf("%d%d%d", num3, num2, num1);
  return 0;
}