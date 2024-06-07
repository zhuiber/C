// printf() 函数的格式化输出

#include <stdio.h>

int main()
{
  char ch = 'A';
  printf("ch = %c\n", ch); // 输出结果：ch = A  （以字符形式输出）
  printf("ch = %d", ch);   // 输出结果：ch = 65（以'A'字符的ASCII码形式输出）
  return 0;
}
