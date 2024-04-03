#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  if(number<0)
  {
//Display a number if it is a Negative number
    printf("%d is a Negative Number",number);
  }
  return 0;
}