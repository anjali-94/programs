#include<stdio.h>
int main()
{
  int n,i=3,sum=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  while(i<n)
  {
    sum= sum+i;
    i = i+2;
  }
  printf("Sum of all odd numbers between 1 to %d is %d",n,sum);
  
  return 0;
  
}