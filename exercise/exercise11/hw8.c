// (8) 已知head指向一个带头结点的单向链表, 链表中每个结点包含数据域(data) 和指针域(next)。
// 请编写所数实现如图1 - 5所示链表的逆置
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
  int data;
  struct ListNode *next;
};

void reverseList(struct ListNode *head)
{
  if (head == NULL || head->next == NULL)
  {
    return; // Empty list or only one node
  }

  struct ListNode *prev = NULL;
  struct ListNode *current = head->next;
  struct ListNode *next;

  while (current != NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  // Update the head to point to the new first node (which is prev)
  head->next = prev;
}

// Function to print the reversed list for verification
void printList(struct ListNode *head)
{
  struct ListNode *current = head->next;
  while (current != NULL)
  {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

// Example usage:
int main()
{
  // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
  struct ListNode *dummyHead = (struct ListNode *)malloc(sizeof(struct ListNode));
  dummyHead->next = NULL; // Initialize as an empty list

  // Adding nodes for example: 1, 2, 3, 4, 5
  struct ListNode *current = dummyHead;
  for (int i = 1; i <= 5; ++i)
  {
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->data = i;
    newNode->next = NULL;
    current->next = newNode;
    current = newNode;
  }

  printf("Original List:\n");
  printList(dummyHead); // Output: 1 -> 2 -> 3 -> 4 -> 5 -> NULL

  // Reverse the list
  reverseList(dummyHead);

  printf("Reversed List:\n");
  printList(dummyHead); // Output: 5 -> 4 -> 3 -> 2 -> 1 -> NULL

  // Clean up memory (not shown: freeing each individual node for simplicity)
  free(dummyHead); // Free the dummy head node

  return 0;
}
