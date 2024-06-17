// (2) 输入10个整数, 将这10个整数按升序排列输出, 并且奇数在前, 偶数在后。
// 例如，如果输人的10个数是10987654321, 则输出13579246810。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 函数用于升序排序数组
void sort(int arr[], int n)
{
  int minIndex, temp;
  for (int i = 0; i < n - 1; i++)
  {
    // 假设当前元素是未排序部分的最小值
    minIndex = i;
    // 遍历未排序部分，寻找最小值
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    // 只有当最小值位置发生变化时才进行交换
    if (minIndex != i)
    {
      temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

int main()
{
  srand(time(NULL));
  int a[10], odd[10], even[10];
  int oddCount = 0, evenCount = 0;

  // 生成并打印10个随机整数
  for (int i = 0; i < 10; i++)
  {
    a[i] = rand() % 100;
    printf("随机数[%d]: %d\n", i, a[i]);
  }

  // 将数字分为奇数和偶数两组
  for (int i = 0; i < 10; i++)
  {
    if (a[i] % 2 != 0)
    {
      odd[oddCount++] = a[i];
    }
    else
    {
      even[evenCount++] = a[i];
    }
  }

  // 对奇数数组和偶数数组分别进行排序
  sort(odd, oddCount);
  sort(even, evenCount);

  // 打印奇数数组
  printf("奇数数组（升序排列）:\n");
  for (int i = 0; i < oddCount; i++)
  {
    printf("%d ", odd[i]);
  }
  printf("\n");

  // 打印偶数数组
  printf("偶数数组（升序排列）:\n");
  for (int i = 0; i < evenCount; i++)
  {
    printf("%d ", even[i]);
  }
  printf("\n");

  // 合并奇数和偶数数组并打印
  printf("合并后的数组（奇数在前，偶数在后，均为升序排列）:\n");
  for (int i = 0; i < oddCount; i++)
  {
    printf("%d ", odd[i]);
  }
  for (int i = 0; i < evenCount; i++)
  {
    printf("%d ", even[i]);
  }
  printf("\n");

  return 0;
}
