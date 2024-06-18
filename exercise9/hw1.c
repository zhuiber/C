// (1) 编写一个交换变量值的函数, 利用该函数交换数组a和数组b中的对应元素值

#include <stdio.h>

void swap(char *a, char *b, int n);

int main()
{
  char a[10] = "abc", b[10] = "efg";
  swap(a, b, 4);
  printf("%s\n%s", a, b);
}

void swap(char *a, char *b, int n)
{
  int i;
  char t;
  for (i = 0; i < n; i++)
  {
    t = *a;
    *a = *b;
    *b = t;
    a++;
    b++;
  }
}