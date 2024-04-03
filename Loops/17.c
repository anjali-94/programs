#include<stdio.h>
int main()
{
  int i=1,n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  printf("All natural numbers from 1 to %d are: \n",n);
  while( i<=n)
  {
    printf("%d\n",i);
    i++;
    
  }
  return 0;
  
}