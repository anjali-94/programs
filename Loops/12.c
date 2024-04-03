#include<stdio.h>
int main()
{
  char ch,upper_case,lower_case;
  printf("Enter any character: ");
  scanf("%c",&ch);
  lower_case = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
  upper_case = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
  if(lower_case || upper_case)
  {
    printf("It is a Vowel");
    
  }
  else
  printf("It is a Consonant" );
  
  return 0;
  
}