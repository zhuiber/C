// 4）编写一个利用冒泡排序法对多个数组中的元素，按照指定数组值排序的函数myBubbleSort。具体要求为：
// a) 该函数是一个无返回值的函数；
// b) 该函数的输入参数为六个：数组元素个数，排序方向、整型数组1、字符型指针数组、整型数组2、浮点数组
// c) 该函数头为： void myBubbleSort(int num, int dirct，int iarr1[ ], char *country[ ], int iarr2[ ], float farr[ ])
// d) 要求：
// 在dirct = 1 时, 在该函数内部按照数组iarr1元素从大到小的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；
// 在dirct = -1 时, 在该函数内部按照数组iarr1元素从小到大的顺序，对所有的四个数组： iarr1[], *country[], iarr2[], farr[]进行排序；

#include <stdio.h>

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