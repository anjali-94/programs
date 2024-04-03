#include<stdio.h>
int main()
{
  int number,fact=1,i;
  printf("Enter a number: ");
  scanf("%d",&number);
  printf("factorial of %d is: ",number);
  for(i = 1;i<=number;i++)
  {
    fact= fact*i;
   
  }
  printf("%d",fact);
  
  return 0;
  
}