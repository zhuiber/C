// 计算输入的两个整数的最大值

#include <stdio.h>

int max(int a, int b);

int main()
{
  int a, b;
  printf("请输入两个整数：");
  scanf("%d %d", &a, &b);
  printf("最大值是：%d\n", max(a, b));
  return 0;
}

int max(int a, int b)
{
  return a > b ? a : b;
}