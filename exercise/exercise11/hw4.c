// (4) 从键盘上输入10个学生的成绩, 编写程序对学生的成绩按从高到低输出, 要求用链表来实现。
#include <stdio.h>
#include <stdlib.h>

// 定义学生结构体
struct Student
{
  float score;
  struct Student *next;
};

// 插入新成绩到链表中，保持链表按成绩降序排列
void insert_sorted(struct Student **head, float score)
{
  struct Student *new_node = (struct Student *)malloc(sizeof(struct Student));
  if (new_node == NULL)
  {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(1);
  }
  new_node->score = score;
  new_node->next = NULL;

  struct Student *current = *head;
  struct Student *prev = NULL;

  // 寻找插入位置
  while (current != NULL && current->score > score)
  {
    prev = current;
    current = current->next;
  }

  // 插入新节点
  if (prev == NULL)
  { // 插入到头部
    new_node->next = *head;
    *head = new_node;
  }
  else
  {
    prev->next = new_node;
    new_node->next = current;
  }
}

// 打印链表中的成绩（降序）
void print_scores(struct Student *head)
{
  printf("学生的成绩按从高到低输出如下：\n");
  while (head != NULL)
  {
    printf("%.2f\n", head->score);
    head = head->next;
  }
}

int main()
{
  struct Student *head = NULL;
  float score;

  printf("请输入10个学生的成绩：\n");

  // 输入10个学生的成绩
  for (int i = 0; i < 10; ++i)
  {
    printf("请输入第 %d 个学生的成绩：", i + 1);
    scanf("%f", &score);
    insert_sorted(&head, score);
  }

  // 输出排序后的成绩
  print_scores(head);

  // 释放链表内存
  struct Student *temp;
  while (head != NULL)
  {
    temp = head;
    head = head->next;
    free(temp);
  }

  return 0;
}
