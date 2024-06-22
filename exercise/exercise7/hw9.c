// (9) 编写一个程序, 将字符数组s2中的全部字符复制到字符数组s1中,
// 不用strcpy函数。复制时，'\0'也要复制过去。'\0'后面的字符不复制。

#include <stdio.h>
#define N 80

int main()
{
  char str1[N], str2[N] = "abcdefg\0hijk";
  int i = 0;
  while (1)
  {
    str1[i] = str2[i];
    if (str2[i] == '\0')
      break;
    i++;
  }
  printf("%s", str1);
}