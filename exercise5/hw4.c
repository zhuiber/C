// (4) 在屏幕上显示一张如下所示的时间表：
// Time
// 1 morning
// 2 afternoon
// 3 night Please enter your choice:

// 操作人员根据提示进行选择, 程序根据输入的时间序号显示相应的问候信息,
// 选择1时显示“Good morning”, 选择2时显示“Good afternoon”,
// 选择3时显示“Good night”, 对于其他的选择显示“Selectionerror !”, 用switch语句编程实现,
// 设计思想】 使用 printf函数输出一个简单的菜单, 通过switch语句进行选择。
// 需要注意的是, 输入选项是字符型的, 所以在case后的数字要加单引号。

#include <stdio.h>

int main()
{
  char c;
  printf(" 1 morning\n"
         " 2 afternoon\n"
         " 3 night\n"
         " Please enter your choice:");
  c = getchar();
  switch (c)
  {
  case '1':
    printf("Good morning\n");
    break;
  case '2':
    printf("Good afternoon\n");
    break;
  case '3':
    printf("Good night\n");
    break;

  default:
    printf("Selectionerror!");
    break;
  }

  return 0;
}
