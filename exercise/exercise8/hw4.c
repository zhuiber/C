// (4) 请编制函数JsSort, 函数的功能是 : 对字符串变量的下标为奇数的字符按其ASCII码值从大到小的顺序进行排序,
// 排序后的结果仍存入字符串数组中。例如:
#include <stdio.h>
#define N 9 // 包含终止符 '\0' 的长度

void JsSort(char a[], int n);

int main()
{
  char a[N] = "abcdefgh";
  JsSort(a, N - 1); // N-1 传递字符串实际长度
  printf("%s", a);
}

void JsSort(char a[], int n)
{
  int i, j, k;
  char t;
  for (i = 1; i < n; i += 2)
  {
    k = i;
    for (j = i + 2; j < n; j += 2)
    {
      if (a[j] > a[k])
      {
        k = j;
      }
    }
    if (k != i)
    {
      t = a[i];
      a[i] = a[k];
      a[k] = t;
    }
  }
}
