// (2) 每个产品销售记录由
// 产品代码dm(字符型4位)、产品名称me(字符型10位)、单价dj(整型)、数量s(整型)、金额je(长整型) 几部分组成。
// 其中, 金额 = 单价X数量。请编制函数SortDat(),
// 其功能要求 : 按产品代码从大到小进行排列, 若产品代码相同, 则按金额从大到小进行排列。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for product sales records
typedef struct
{
  char code[5];
  char name[11];
  int price;
  int quantity;
  long amount;
} Product;

// Function to input product sales records
void input_products(Product *products, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter product code, name, price, and quantity for product %d: ", i + 1);
    scanf("%4s %10s %d %d", products[i].code, products[i].name, &products[i].price, &products[i].quantity);
    products[i].amount = (long)products[i].price * products[i].quantity;
  }
}

// Comparison function for sorting
int compare_products(const void *a, const void *b)
{
  Product *productA = (Product *)a;
  Product *productB = (Product *)b;

  int code_compare = strcmp(productB->code, productA->code);
  if (code_compare == 0)
  {
    if (productB->amount > productA->amount)
      return 1;
    else if (productB->amount < productA->amount)
      return -1;
    else
      return 0;
  }
  else
  {
    return code_compare;
  }
}

// Function to sort the products
void SortDat(Product *products, int n)
{
  qsort(products, n, sizeof(Product), compare_products);
}

int main()
{
  int n;

  printf("Enter the number of products: ");
  scanf("%d", &n);

  // Allocate memory for product records
  Product *products = (Product *)malloc(n * sizeof(Product));

  // Input product records
  input_products(products, n);

  // Sort the product records
  SortDat(products, n);

  // Output the sorted product records
  printf("\nSorted product records:\n");
  for (int i = 0; i < n; i++)
  {
    printf("Code: %s, Name: %s, Price: %d, Quantity: %d, Amount: %ld\n",
           products[i].code, products[i].name, products[i].price, products[i].quantity, products[i].amount);
  }

  // Free allocated memory
  free(products);

  return 0;
}
