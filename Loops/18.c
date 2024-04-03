#include<stdio.h>
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  int i = n;
  printf("All natural numbers in reverse from %d to 1: \n",n);
  while( i>=1)
  {
    printf("%d\n",i);
    i--;
    
  }
  return 0;
  
}