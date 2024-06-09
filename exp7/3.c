// 6）编写一个按照数组下标，以及数组中元素的值的大小绘制出棒图的函数myDisplayBar。具体要求为：
// a) 该函数是一个无返回值的函数；
// b) 该函数头为： void myDisplayBar(int num, int key, char *country[ ]，int iarr1[ ], int iarr2[ ] , float farr[ ])
// c) 要求：
// key = 1 时, 屏幕上每一行显示方式为：
// 序号 country  iarr1  iarr2  farr  ‘*’个数（根据 iarr1 数值大小）。
// key = 2 时, 屏幕上每一行显示方式为：
// 序号 country  iarr1  iarr2  farr  ‘*’个数（根据 iarr2 数值大小）。
// key = 3 时, 屏幕上每一行显示方式为：
// 序号 country  iarr1  iarr2  farr  ‘*’个数（根据 farr 数值大小）。

#include <stdio.h>

void myDisplayBar(int num, int key, char *country[], int iarr1[], int iarr2[], float farr[])
{
  for (int i = 0; i < num; i++)
  {
    printf("%d %s %d %d %.2f ", i, country[i], iarr1[i], iarr2[i], farr[i]);
    if (key == 1)
    {
      for (int j = 0; j < iarr1[i]; j++)
      {
        printf("*");
      }
    }
    else if (key == 2)
    {
      for (int j = 0; j < iarr2[i]; j++)
      {
        printf("*");
      }
    }
    else if (key == 3)
    {
      for (int j = 0; j < farr[i]; j++)
      {
        printf("*");
      }
    }
    printf("\n");
  }
}