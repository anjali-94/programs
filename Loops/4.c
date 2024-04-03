#include<stdio.h>
int main()
{
  int percentage;
  printf("Enter the percentage of a student: ");
  scanf("%d",&percentage);
  if(percentage>=90)
  {
    printf("Grade is A" );
    
  }
  else if(percentage>=70)
  {
    printf("Grade is B" );
    
  }
  else if(percentage>=50)
  {
    printf("Grade is C" );
  }
  else
  printf("Grade is F" );
  
  return 0;
  
}