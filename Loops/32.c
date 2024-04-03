#include<stdio.h>
int main()
{
  int num,digit,answer=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  while(num!=0)
  {
    digit = num%10;
    answer= (answer*10+digit);
    num = num/10;
    
  }
  printf("Reverse of a number: %d ",answer);
  
  return 0;
  
}