// (6)25个人围成一个圈, 从第1个人开始顺序报号, 凡报号为3和3的倍数者退出圈子, 找出最后留在圈子中的人原来的序号。
#include <stdio.h>
#include <stdlib.h>

// 定义节点结构体
struct Node
{
  int number;        // 原始序号
  struct Node *next; // 指向下一个节点的指针
};

// 函数：初始化环形链表
struct Node *init_circle(int n)
{
  if (n <= 0)
    return NULL;

  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  if (head == NULL)
  {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(1);
  }
  head->number = 1;
  head->next = head; // 初始时自己指向自己

  struct Node *current = head;
  for (int i = 2; i <= n; ++i)
  {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
      fprintf(stderr, "Memory allocation failed.\n");
      exit(1);
    }
    new_node->number = i;
    new_node->next = head;    // 新节点指向头节点，形成循环
    current->next = new_node; // 当前节点的下一个是新节点
    current = new_node;       // 更新当前节点为新节点
  }

  return head;
}

// 函数：模拟报号并退出的过程，返回最后剩下的人的原始序号
int find_last_person(int n, int k)
{
  struct Node *head = init_circle(n);
  struct Node *current = head;
  struct Node *prev = NULL;

  // 模拟报号并退出的过程
  while (head->next != head)
  {
    // 找到报号为k的人
    for (int i = 1; i < k; ++i)
    {
      prev = current;
      current = current->next;
    }

    // 删除报号为k的人
    if (prev != NULL)
    {
      prev->next = current->next;
    }
    else
    {
      head = current->next; // 如果删除的是头节点，更新头节点
    }
    struct Node *temp = current;
    current = current->next;
    free(temp); // 释放节点内存
  }

  int last_person = head->number; // 最后剩下的人的原始序号
  free(head);                     // 释放最后一个节点的内存
  return last_person;
}

int main()
{
  int n = 25; // 总人数
  int k = 3;  // 报号为3和3的倍数的人退出

  int last_person = find_last_person(n, k);
  printf("最后留在圈子中的人原来的序号是: %d\n", last_person);

  return 0;
}
