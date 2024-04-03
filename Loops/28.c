#include<stdio.h>
int main()
{
  int num,last_digit,first_digit,sum;
  printf("Enter a number: ");
  scanf("%d",&num);
  
  last_digit = num%10;
  printf("\nLast digit is: %d ",last_digit);
  
  while(num!=0) {
    first_digit = num%10;
    num = num/10;
  }
  printf("\nfirst digit is: %d",first_digit);
  
  sum = first_digit + last_digit;
  printf("\nSum of first digit and last digit of a number is: %d",sum);
  
  return 0;
  
}