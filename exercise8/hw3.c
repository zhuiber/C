// (3) 定义函数 GetData() 用于接收键盘输入的一组整型数据, 并放入一个数组中;
// 另外再定义一个函数 Sort() 用于对输人的这一组数据按照降序排列。
// 主函数先后调用 GetData() 和Sort() 函数, 输出最后的排序结果

#include <stdio.h>
#define N 3

void GetData(int a[], int n);
void Sort(int a[], int n);

int main()
{
  int a[N], i;
  GetData(a, N);
  Sort(a, N);
  for (i = 0; i < N; i++)
    printf("%d", a[i]);
}

void GetData(int a[], int n)
{
  int i;
  printf("Input number:");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
}

void Sort(int a[], int n)
{
  int i, j, k, t;
  for (i = 0; i < n - 1; i++)
  {
    k = i;
    for (j = i + 1; j < n; j++)
      if (a[j] > a[k])
        k = j;
    if (k != i)
    {
      t = a[i];
      a[i] = a[k];
      a[k] = t;
    }
  }
}