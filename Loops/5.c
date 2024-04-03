#include <stdio.h>
int main()
{
  int num1,num2,sum,multiply,divide, subtraction;
  char op;
  printf("enter 1st number: ");
  scanf("%d",&num1);
  printf("enter 2nd number: ");
  scanf("%d",&num2);
  printf("enter an operator: ");
  scanf(" %c ",&op);
  
  if(op == '+') {
    sum = num1+num2;
    printf("%d",&sum);
    
  }
  else if (op == '*') {
    multiply = num1*num2;
    printf("%d",&multiply);
    
  }
  else if (op == '/') {
    divide = num1/num2;
    printf("%d",&divide);
  }
  else {
    subtraction = num1-num2;
    printf("%d",&subtraction );
  }
  return 0;
  
  
}