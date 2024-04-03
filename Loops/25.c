#include<stdio.h>
int main()
{
  int number,i=1,mul;
  printf("Enter the value of number: ");
  scanf("%d",&number);
  while(i<=10)
  {
    mul=number*i;
    printf("%d × %d = %d\n",number,i,mul);
    i++;
  }
  
  return 0;
  
}