#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  if (num%2 == 0)
  {
    printf("Integer is even number");
  }
  else
  {
    printf("Integer is odd number ");
  }
}