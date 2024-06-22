// 判断是否是数字

#include <stdio.h>

int my_isdigit(char c);

int main()
{
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);

  if (isdigit(c))
  {
    printf("%c is a digit.\n", c);
  }
  else
  {
    printf("%c is not a digit.\n", c);
  }

  return 0;
}

int my_isdigit(char c)
{
  return c >= '0' && c <= '9';
}
