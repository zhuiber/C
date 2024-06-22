#include "Myfuns.h"

void init_pic(char (*pic)[WIDTH])
{
  int i, j;
  for (i = 0; i < HIGH; i++)
  {
    for (j = 0; j < WIDTH; j++)
    {
      pic[i][j] = ' ';
    }
  }
  for (i = 0; i < HIGH; i++)
  {
    pic[i][WIDTH - 1] = '\n';
    pic[i][0] = '|';
    pic[i][WIDTH - 2] = '|';
  }
  for (i = 0; i < WIDTH - 1; i++)
  {
    pic[0][i] = '*';
    pic[HIGH - 1][i] = '*';
  }
  pic[HIGH - 1][WIDTH - 1] = '\0';
}

void init_ball(struct BALL *ball, int num)
{
  char icon_8[2] = {'0', '1'};
  for (int i = 0; i < num; i++)
  {
    (ball + i)->X = rand() % (HIGH - 6) + 3;
    (ball + i)->Y = rand() % (WIDTH - 6) + 3;
    (ball + i)->dX = rand() % 5 - 2;
    while ((ball + i)->dX == 0)
      (ball + i)->dX = rand() % 5 - 2;
    (ball + i)->dY = rand() % 5 - 2;
    while ((ball + i)->dY == 0)
      (ball + i)->dY = rand() % 5 - 2;
    (ball + i)->icon = icon_8[rand() % 2];
  }
}

void process(struct BALL *ball, char (*pic)[WIDTH], int num)
{
  // 打印
  for (int i = 0; i < num; i++)
    pic[(ball + i)->X][(ball + i)->Y] = (ball + i)->icon;
  printf("%s", pic);
  init_pic(pic);
  for (int i = 0; i < num; i++)
  {
    (ball + i)->X += (ball + i)->dX;
    (ball + i)->Y += (ball + i)->dY;
  }

  // 边界检测
  for (int i = 0; i < num; i++)
  {
    if ((ball + i)->X >= HIGH - 2)
    {
      (ball + i)->dX = -(ball + i)->dX;
      cnt++;
      putchar('\7');
    }
    if ((ball + i)->X <= 1)
    {
      (ball + i)->dX = -(ball + i)->dX;
    }
    if ((ball + i)->Y >= WIDTH - 2)
    {
      (ball + i)->dY = -(ball + i)->dY;
    }
    if ((ball + i)->Y <= 1)
    {
      (ball + i)->dY = -(ball + i)->dY;
    }
  }

  // 碰撞检测
  check_collision(ball, num);

  printf("\n落地次数 %d\n", cnt);
}

void check_collision(struct BALL *ball, int num)
{
  char icon_8[2] = {'0', '1'};
  for (int i = 0; i < num; i++)
  {
    for (int j = i + 1; j < num; j++)
    {
      double dist = sqrt(pow((ball + i)->X - (ball + j)->X, 2) + pow((ball + i)->Y - (ball + j)->Y, 2));
      if (dist <= 1.5)
      {
        // 改变方向
        int temp_dX = (ball + i)->dX;
        (ball + i)->dX = -(ball + i)->dY;
        (ball + i)->dY = temp_dX;

        temp_dX = (ball + j)->dX;
        (ball + j)->dX = -(ball + j)->dY;
        (ball + j)->dY = temp_dX;

        // 改变颜色
        (ball + i)->icon = icon_8[rand() % 2];
        (ball + j)->icon = icon_8[rand() % 2];
      }
    }
  }
}
