// (7) 编写程序, 对于给定的一个百分比制成绩, 输出相应的五分制成绩。
// 设 : 90分以上为'A ',80~89 分为' B ',70~79分为'℃’, 60 ~69分为'D ',60分以下为' E'(用switch语句实现)。
// 【设计思想】为了使用switch语句来实现, 可将成绩score整除10取商(商可能的值有0, 1, 2, 3, 4, 5.6, 7, 8, 9, 10) 来进行。

#include <stdio.h>

int main()
{
  int score;
  char grade;
  printf("Please enter the score: ");
  scanf("%d", &score);
  switch (score / 10)
  {
  case 10:
  case 9:
    grade = 'A';
    break;
  case 8:
    grade = 'B';
    break;
  case 7:
    grade = 'C';
    break;
  case 6:
    grade = 'D';
    break;
  default:
    grade = 'E';
    break;
  }
  printf("The grade is: %c\n", grade);
  return 0;
}