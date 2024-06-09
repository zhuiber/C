// 5）编写一个利用选择排序法对多个数组中的元素，按照指定数组值排序的函数mySelectSort。具体要求为：
// a) 该函数是一个无返回值的函数；
// b) 该函数的输入参数为六个：数组元素个数，排序方向、浮点数组、字符型指针数组、整型数组1、整型数组2
// c) 该函数头为： void mySelectSort(int num, int dirct, float farr[ ], char *country[ ]，int iarr1[ ], int iarr2[ ])
// d) 要求：
// 在dirct = 1 时, 在该函数内部按照数组iarr1元素从大到小的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；
// 在dirct = -1 时, 在该函数内部按照数组iarr1元素从小到大的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；

#include <stdio.h>

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