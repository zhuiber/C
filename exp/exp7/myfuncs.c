#include <stdio.h>

// 3) 编写一个计算进出口比率的函数。具体要求为：
// 4) 该函数有四个输入参数：数组元素个数，整型数组(进口额)、整型数组(出口额)、浮点数组(交换比率)
// 5) 函数的返回值：无
// 6) 该函数头为： void myRatio (int num, int imp[ ], int exp[ ], float ratio[])
void myRatio(int num, int imp[], int exp[], float ratio[]);

// 4）编写一个利用冒泡排序法对多个数组中的元素，按照指定数组值排序的函数myBubbleSort。具体要求为：
// a) 该函数是一个无返回值的函数；
// b) 该函数的输入参数为六个：数组元素个数，排序方向、整型数组1、字符型指针数组、整型数组2、浮点数组
// c) 该函数头为： void myBubbleSort(int num, int dirct，int iarr1[ ], char *country[ ], int iarr2[ ], float farr[ ])
// d) 要求：
// 在dirct = 1 时, 在该函数内部按照数组iarr1元素从大到小的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；
// 在dirct = -1 时, 在该函数内部按照数组iarr1元素从小到大的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；
void myBubbleSort(int num, int dirct, int iarr1[], char *country[], int iarr2[], float farr[]);

// 5）编写一个利用选择排序法对多个数组中的元素，按照指定数组值排序的函数mySelectSort。具体要求为：
// a) 该函数是一个无返回值的函数；
// b) 该函数的输入参数为六个：数组元素个数，排序方向、浮点数组、字符型指针数组、整型数组1、整型数组2
// c) 该函数头为： void mySelectSort(int num, int dirct, float farr[ ], char *country[ ]，int iarr1[ ], int iarr2[ ])
// d) 要求：
// 在dirct = 1 时, 在该函数内部按照数组iarr1元素从大到小的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；
// 在dirct = -1 时, 在该函数内部按照数组iarr1元素从小到大的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；
void mySelectSort(int num, int dirct, float farr[], char *country[], int iarr1[], int iarr2[]);

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
void myDisplayBar(int num, int key, char *country[], int iarr1[], int iarr2[], float farr[]);

void myRatio(int num, int imp[], int exp[], float ratio[])
{
  for (int i = 0; i < num; i++)
  {
    ratio[i] = (float)exp[i] / imp[i];
  }
}

void myBubbleSort(int num, int dirct, int iarr1[], char *country[], int iarr2[], float farr[])
{
  for (int i = 0; i < num - 1; i++)
  {
    for (int j = 0; j < num - i - 1; j++)
    {
      if (dirct == 1)
      {
        if (iarr1[j] < iarr1[j + 1])
        {
          int temp = iarr1[j];
          iarr1[j] = iarr1[j + 1];
          iarr1[j + 1] = temp;

          char *tempCountry = country[j];
          country[j] = country[j + 1];
          country[j + 1] = tempCountry;

          int temp2 = iarr2[j];
          iarr2[j] = iarr2[j + 1];
          iarr2[j + 1] = temp2;

          float temp3 = farr[j];
          farr[j] = farr[j + 1];
          farr[j + 1] = temp3;
        }
      }
      else if (dirct == -1)
      {
        if (iarr1[j] > iarr1[j + 1])
        {
          int temp = iarr1[j];
          iarr1[j] = iarr1[j + 1];
          iarr1[j + 1] = temp;

          char *tempCountry = country[j];
          country[j] = country[j + 1];
          country[j + 1] = tempCountry;

          int temp2 = iarr2[j];
          iarr2[j] = iarr2[j + 1];
          iarr2[j + 1] = temp2;

          float temp3 = farr[j];
          farr[j] = farr[j + 1];
          farr[j + 1] = temp3;
        }
      }
    }
  }
}

void mySelectSort(int num, int dirct, float farr[], char *country[], int iarr1[], int iarr2[])
{
  for (int i = 0; i < num - 1; i++)
  {
    int maxIndex = i;
    int minIndex = i;
    for (int j = i + 1; j < num; j++)
    {
      if (dirct == 1)
      {
        if (iarr1[j] > iarr1[maxIndex])
        {
          maxIndex = j;
        }
      }
      else if (dirct == -1)
      {
        if (iarr1[j] < iarr1[minIndex])
        {
          minIndex = j;
        }
      }
    }

    if (dirct == 1)
    {
      int temp = iarr1[i];
      iarr1[i] = iarr1[maxIndex];
      iarr1[maxIndex] = temp;

      char *tempCountry = country[i];
      country[i] = country[maxIndex];
      country[maxIndex] = tempCountry;

      int temp2 = iarr2[i];
      iarr2[i] = iarr2[maxIndex];
      iarr2[maxIndex] = temp2;

      float temp3 = farr[i];
      farr[i] = farr[maxIndex];
      farr[maxIndex] = temp3;
    }
    else if (dirct == -1)
    {
      int temp = iarr1[i];
      iarr1[i] = iarr1[minIndex];
      iarr1[minIndex] = temp;

      char *tempCountry = country[i];
      country[i] = country[minIndex];
      country[minIndex] = tempCountry;

      int temp2 = iarr2[i];
      iarr2[i] = iarr2[minIndex];
      iarr2[minIndex] = temp2;

      float temp3 = farr[i];
      farr[i] = farr[minIndex];
      farr[minIndex] = temp3;
    }
  }
}

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