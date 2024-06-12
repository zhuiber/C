// (1)编写程序判断输入整数的正负性和奇偶性
// 【设计思想】对一个整数a的正负性判断,可将a与0比较来求得;奇偶性判断,可根据a%2的值为0还是为1来求得

#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  if (a < 0)
    printf("a<0\n");
  else
    printf("a>0\n");
  if (a % 2 == 0)
    printf("a是偶数\n");
  else
    printf("a是奇数\n");
  return 0;
}