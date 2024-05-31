// 定义函数GetData() 用于接收键盘输入的一组整型数据, 并放入一个数组中;
// 另外再定义一个函数Sort() 用于对输入的这一组数据进行降序排列。
// 主函数先后调用GetData和 Sort函数, 输出最后的排序结果。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 随机产生n个整数,存入数组arr中

int GetData(int *arr, int n);
void Sort(int *arr, int n);

int main()
{
  int n = 5;
  int arr[n];
  GetData(arr, n);
  Sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}

int GetData(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    // printf("Please input an integer: ");
    // scanf("%d", &arr[i]);
    arr[i] = rand() % 100;
  }
  return 0;
}

// 冒泡排序
void Sort(int *arr, int n)
{
  int temp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}