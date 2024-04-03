#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter the first number: ");
  scanf("%d",&num1);
  printf("Enter the second number:");
  scanf("%d",&num2);
  if(num1>num2) {
    printf("first integer is greater than second integer ");
  }
  else if(num1<num2)
  {
    printf("second integer is greater than first integer ");
  }
  else
  {
    printf("Both integers are equal");
  }
  return 0;
  
}