// (8) 编写摄氏温度、华氏温度转换程序。
// 要求 : 从键盘输入一个摄氏温度, 屏幕就显示对应的华氏温度, 输出取两位小数。转换公式 : F = (C + 32) x 9 / 5。
// 【设计思想】利用公式计算, 注意在C语言中9 / 5为整除其值为1, 故应写成9 .0 / 5.0。

#include <stdio.h>

int main()
{
  float F, C;
  scanf("%f", &C);
  F = (C + 32) * 9.0 / 5.0;
  printf("%f", F);
  return 0;
}