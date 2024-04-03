#include<stdio.h>
int main()
{
  int i=1;
  printf("All odd numbers between 1 to 100: \n");
  while(i<=100)
  {
    printf(" %d\n",i);
    i=i+2;
  }
  return 0;
}