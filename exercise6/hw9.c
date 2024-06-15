// (9) 从键盘上任意输入一个整数x, 编程计算x的每位数字相加之和(忽略整数前的正负号)。
// 例如.输人x为1234.则由1234分离出1、2、3、4四个数字, 然后计算1 + 2 + 3 + 4 = 10.并输出10。

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, sum = 0;

  printf("请输入一个整数: ");
  scanf("%d", &x);

  // 取绝对值
  x = abs(x);

  while (x > 0)
  {
    sum += x % 10; // 取出最后一位数字并加到 sum 中
    x /= 10;       // 去掉最后一位数字
  }

  printf("各位数字之和为: %d\n", sum);

  return 0;
}
