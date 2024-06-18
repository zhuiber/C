#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include "Myfuns.h"

int cnt = 0;

int main()
{
  // 设置控制台代码页为UTF-8
  SetConsoleOutputCP(CP_UTF8);

  system("mode con cols=100 lines=41"); // 设置窗口大小
  srand(time(NULL));

  // 接受球的个数，最大是10
  printf("请输入球的个数（最大值：10）：");
  int num; // 球的个数
  scanf("%d", &num);
  if (num > 10)
    num = 10;

  // 图像初始化
  char pic[HIGH][WIDTH] = {0};
  init_pic(pic);

  // 球初始化
  struct BALL *ball = (struct BALL *)malloc(sizeof(struct BALL) * num);
  init_ball(ball, num);

  while (1)
  {
    // 处理每一张图像
    process(ball, pic, num);
    Sleep(25);
    system("cls");
  }

  free(ball);
  return 0;
}
