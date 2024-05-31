// 字符串中查找某字符

#include <stdio.h>

int digit_position(const char *str, char ch);

int main()

{
  char ch;
  char str[] = "ABCD";
  printf("Please input a char: ");
  scanf("%c", &ch);
  printf("The position of %c in %s is %d\n", ch, str, digit_position(str, ch));
  return 0;
}

int digit_position(const char *str, char ch)
{
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ch)
    {
      return i + 1;
    }
  }
  return -1;
}