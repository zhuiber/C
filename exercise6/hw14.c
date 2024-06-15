// (14)输入一行字母,或者用原文输出,或者将字母加密输出(如'a'变成'c'’，b变成'd"'变成'b’)。
// 用#define命令控制是否要译成密码输出。

#include <stdio.h>
#define encode 1

int main()
{
  int c;
  while ((c = getchar()) != '\n')
  {
    if (encode)
    {
      if (c >= 'a' && c <= 'x' || c >= 'A' && c <= 'X')
        c += 2;
      else if (c == 'y' || c == 'Y' || c == 'z' || c == 'Z')
        c = c - 24;
      putchar(c);
    }
  }
  putchar('\n');
  return 0;
}