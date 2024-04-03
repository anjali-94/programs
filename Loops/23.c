#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(i=2;i<n;i=i+2)
  {
    sum= sum+i;
  }
  printf("Sum of all even numbers between 1 to %d is %d",n,sum);
  
  return 0;
  
}