/**
 *@author:2022300013 卫宏林
 *@description: bubble & selection sort algorithms of random numbers, and bar charts
 *@version:v0.01
 *@date:2024-05-10
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int rArray[20];
  char cArray[51];

  srand(time(0)); // 用当前时间作为种子初始化随机数生成器

  printf("20个随机数及其棒图\n\n");
  // 生成20个1到50之间的随机整数，并存储在rArray中
  for (int i = 0; i < 20; i++)
  {
    rArray[i] = rand() % 50 + 1;
  }

  // 用'\0'初始化cArray
  for (int i = 0; i < 51; i++)
  {
    cArray[i] = '\0';
  }

  // 输出随机整数及其对应的柱状图
  for (int i = 0; i < 20; i++)
  {
    printf("%d ", rArray[i]);

    // 使用'*'显示柱状图
    for (int j = 0; j < rArray[i]; j++)
    {
      printf("*");
    }

    printf("\n");
  }

  // 等待键盘输入回车键后，继续进行下面的过程：
  printf("按回车键继续...");
  getchar();
  printf("冒泡排序后的结果和棒图\n\n");

  // 冒泡排序
  for (int i = 0; i < 20 - 1; i++)
  {
    for (int j = 0; j < 20 - i - 1; j++)
    {
      if (rArray[j] < rArray[j + 1])
      {
        int temp = rArray[j];
        rArray[j] = rArray[j + 1];
        rArray[j + 1] = temp;
      }
    }
  }

  // 输出排序后的整数及其对应的柱状图
  for (int i = 0; i < 20; i++)
  {
    printf("%d ", rArray[i]);

    // 使用'*'显示柱状图
    for (int j = 0; j < rArray[i]; j++)
    {
      printf("*");
    }

    printf("\n");
  }

  // 等待键盘输入回车键后，继续进行下面的过程：
  printf("按回车键继续...");
  getchar();
  printf("选择排序后的结果和棒图\n\n");

  // 选择排序
  for (int i = 0; i < 20 - 1; i++)
  {
    int maxIndex = i;
    for (int j = i + 1; j < 20; j++)
    {
      if (rArray[j] > rArray[maxIndex])
      {
        maxIndex = j;
      }
    }

    int temp = rArray[i];
    rArray[i] = rArray[maxIndex];
    rArray[maxIndex] = temp;
  }

  // 输出排序后的整数及其对应的柱状图
  for (int i = 0; i < 20; i++)
  {
    printf("%d ", rArray[i]);

    // 使用'*'显示柱状图
    for (int j = 0; j < rArray[i]; j++)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
