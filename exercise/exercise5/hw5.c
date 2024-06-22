// (5)输入一个年份和月份,打印出该月份有多少天(考虑闰年),用switch 语句编程。
// 设计思想 每年中1、3、5、7、8、10、12月有31天,4、6、9、11月有30天,对于2月来说,闰年有29天,平年有28天,
// 所以应判断年份是否为闰年。

#include <stdio.h>

int main()
{
  int year, month;
  printf("Please enter the year and month:");
  scanf("%d%d", &year, &month);
  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("31 days\n");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("30 days\n");
    break;
  case 2:
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      printf("29 days\n");
    else
      printf("28 days\n");
    break;
  default:
    printf("Invalid month\n");
    break;
  }

  return 0;
}