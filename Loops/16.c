#include<stdio.h>
int main()
{
  int basic_sal,gross_sal;
  printf("Enter the basic salary of an employee: ");
  scanf("%d",&basic_sal);
  printf("\nGross salary = basic salary+ HRA + DA\n");
  
  if(basic_sal<=10000) {
    gross_sal = basic_sal+20+80;
    printf("Gross salary is: %d",gross_sal);
    
  }
  else if(basic_sal<=20000) {
    gross_sal = basic_sal+25+90;
    printf("Gross salary is: %d",gross_sal);
    
  }
  else if (basic_sal>20000) {
    gross_sal = basic_sal+30+95;
    printf("Gross salary is: %d",gross_sal);
    
  }
  
  return 0;
}