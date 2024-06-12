// (2)编程判断输入数据的符号属性
// x > 0 sign = 1
// x = 0 sign = 0
// x < 0 sign = -1

#include <stdio.h>

int main()
{
  int x, sign;
  scanf("%d", &x);
  if (x > 0)
    sign = 1;
  else if (x == 0)
    sign = 0;
  else
    sign = -1;
  printf("%d", sign);
  return 0;
}