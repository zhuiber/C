// (11) 有n个整数, 使前面各数顺序向后移m个位置, 最后m个数变成最前面m个数。
// 编写一个函数实现以上功能, 在主雨数中输入n个整数和输出调整后的n个整数。
#include <stdio.h>

void shift(int *p, int n, int m);
void show(int *p, int n);

int main()
{
  int p[6] = {1, 2, 3, 4, 5, 6}; // Ensure array has 6 elements initialized
  shift(p, 6, 2);                // Correct function call syntax
  show(p, 6);                    // Correct function call syntax
  return 0;                      // Add return statement to main
}

void shift(int *p, int n, int m)
{
  int i, j, t;
  for (i = 0; i < m; i++)
  {
    t = p[n - 1];
    for (j = n - 1; j > 0; j--)
      p[j] = p[j - 1];
    p[0] = t;
  }
}

void show(int *p, int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", p[i]); // Add space for better readability
  printf("\n");
}
