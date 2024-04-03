#include<stdio.h>
int main()
{
  int num,last_digit,first_digit;
  printf("Enter a number: ");
  scanf("%d",&num);
  
  last_digit = num%10;
  printf("\nLast digit is: %d ",last_digit);
  
  while(num!=0) {
    first_digit = num%10;
    num = num/10;
  }
  printf("\nfirst digit is: %d",first_digit);
  
  
  return 0;
  
}