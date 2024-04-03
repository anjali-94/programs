#include<stdio.h>
int main()
{
  int number,power,i;
  int answer=1;
  printf("Enter a number: ");
  scanf("%d",&number);
  printf("Enter a power: ");
  scanf("%d",&power);
  for(i=1;i<=power;i++)
  {
    answer= (answer*number);
  }
  printf("Answer is equals to: %d",answer);
 
 return 0;
 
}