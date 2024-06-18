// (5) 编写一个函数 strlshif(char *s.int n),
// 其功能是把字符串s中的所有字符左移n个位置, 串中的前n个字符移到最后:

#include <stdio.h>
#include <string.h>

void strlshif(char *s, int n);

int main()
{
  char str[] = "0123456789";
  strlshif(str, 3);
  printf("%s", str);
}

void strlshif(char *s, int n)
{
  int i;
  char ch;
  for (i = 0; i < n; i++)
  {
    ch = s[0];
    strncpy(s, s + 1, strlen(s) - 1);
    s[strlen(s) - 1] = ch;
  }
}