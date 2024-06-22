// printf() 函数的格式化输出

#include <stdio.h>
int main()
{
  char ch = 'A';
  printf("   12345678901234567890\n");
  printf("ch=%c-----------(ch=%%c)\n", ch);
  printf("ch=%4c--------(ch=%%4c)\n", ch);
  printf("ch=%-4c--------(ch=%%-4c)\n", ch);
  printf("ch=%04c--------(ch=%%04c)\n", ch);
  printf("st=%s--------(st=%%s)\n", "CCNU");
  printf("st=%6s------(st=%%6s)\n", "CCNU");
  printf("st=%06.3s------(st=%%06.3s)\n", "CCNU");
  return 0;
}
