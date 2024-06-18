#ifndef MYFUNS_H
#define MYFUNS_H

#define HIGH 40
#define WIDTH 100

extern int cnt;

struct BALL
{
  int X;  // 球在x方向的位置    o _________
  int Y;  // 球在y方向的位置     |       y
  int dX; // 球在x方向的速度     |
  int dY; // 球在y方向的速度     | x
  char icon;
};

void init_pic(char (*pic)[WIDTH]);
void init_ball(struct BALL *ball, int num);
void process(struct BALL *ball, char (*pic)[WIDTH], int num);
void check_collision(struct BALL *ball, int num);

#endif
