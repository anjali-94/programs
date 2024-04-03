#include<stdio.h>
int main()
{
  int num,count=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  while(num!=0)
  {
    count++;
    num = num/10;
    
  }
  printf("No. of digits: %d ",count);
  
  return 0;
  
}