// (6) 运输公司对用户计算运费。路程(以s表示, 单位为km) 越远, 每千米运费越低标准如下
// s < 250  没有折扣
// 250 < s < 500 2 % 折扣
// 500 < s < 1000 5 % 折扣
// 1000 < s < 2000 8 % 折扣
// 2000 < s < 3000 10 % 折扣
// s > 3000  15 % 折扣
// 设每吨每千米货物的基本运费为货物重为w, 距离为s, 折扣为d, 则总运费
// 为p * w * s * (1 - d)。请编程计算货物的总运费。 要求用switch语句来实现
#include <stdio.h>
int main()
{
  int c, s;
  float p, w, d, f;
  printf("please enter price, weight, distance:");
  scanf("%f%f%d", &p, &w, &s);
  if (s >= 3000)
    c = 12;
  else
    c = s / 250;
  switch (c)
  {
  case 0:
    d = 0;
    break;
  case 1:
    d = 2;
    break;
  case 2:
  case 3:
    d = 5;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    d = 8;
    break;
  case 8:
  case 9:
  case 10:
  case 11:
    d = 10;
    break;
  case 12:
    d = 15;
    break;
  }

  f = p * w * s * (1 - d / 100.0);
  printf("freight= %.2f\n", f);
  return 0;
}