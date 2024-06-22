// (2) 不用strcat函数, 编写实现字符串连接函数strcat的功能, 将字符串t连接到字符串s的尾部。
#include <stdio.h>
void MyStrcat(char *b, char *a);

int main()
{
  char a[10] = "abc", b[10] = "de";
  MyStrcat(a, b);
  printf("%s", a);
  return 0;
}
void MyStrcat(char *a, char *b)
{
  while (*a != '\0')
    a++;
  while (*b != '\0')
  {
    *a = *b;
    a++;
    b++;
  }
  *a = '\0';
}
