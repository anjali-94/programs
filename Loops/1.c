#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter 1st number: ");
  scanf("%d",&a);
  printf("Enter 2nd number: ");
  scanf("%d",&b);
  printf("Enter 3rd number: ");
  scanf("%d",&c);
  
  if(a>b&&a<c||a<b&&a>c) {
    printf("%d is the second maximum number out of three",a);
  }
  else if(b>a&&b<c||b<a&&b>c) {
    printf("%d is the second maximum number out of three",b);
  }
  else {
    printf("%d is the second maximum number out of three",c);
  }
  
  return 0;
  
  
}