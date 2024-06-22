// (1) 编程计算2 + 4十6 +…十98十100的值
// 【参考答案】
//  算法1 : 利用for循环语句实现,
//  在循环体外为sum赋初值0。
#include <stdio.h>

int main()
{
  int i, sum = 0;
  for (i = 0; i <= 100; i += 2)
  {
    sum += i;
  }
  printf("%d", sum);
  return 0;
}