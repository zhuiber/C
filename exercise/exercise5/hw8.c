// (8) 编程实现 : 输入一个整数, 判断它能否被3, 5, 7整除, 并输出以下信息之一
// 能同时被3, 5, 7整除;
// 能被其中两个数(要指出哪两个)整除;
// 能被其中一个数(要指出哪一个) 整除;
// 不能被3 .5, 7任一个整除。
// 【设计思想】判断x被n整除可用x % n == 0来判断即可

#include <stdio.h>

int main()
{
  int x;
  printf("Please enter an integer: ");
  scanf("%d", &x);
  if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0)
  {
    printf("The integer can be divided by 3, 5, 7.\n");
  }
  else if (x % 3 == 0 && x % 5 == 0)
  {
    printf("The integer can be divided by 3 and 5.\n");
  }
  else if (x % 3 == 0 && x % 7 == 0)
  {
    printf("The integer can be divided by 3 and 7.\n");
  }
  else if (x % 5 == 0 && x % 7 == 0)
  {
    printf("The integer can be divided by 5 and 7.\n");
  }
  else if (x % 3 == 0)
  {
    printf("The integer can be divided by 3.\n");
  }
  else if (x % 5 == 0)
  {
    printf("The integer can be divided by 5.\n");
  }
  else if (x % 7 == 0)
  {
    printf("The integer can be divided by 7.\n");
  }
  else
  {
    printf("The integer can't be divided by 3, 5, 7.\n");
  }
  return 0;
}