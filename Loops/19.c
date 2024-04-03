#include<stdio.h>
int main()
{
  char ch;
  ch ='a';
  printf("Alphabets from a to z:\n");
  while(ch <='z')
  {
    printf(" %c\n",ch);
    ch++;
  }
  return 0;
}