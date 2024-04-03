#include <stdio.h>

int iseven(int a)   //function defination
{
    if (a%2==0)
    {
         printf("%d is a even number",a);
        
    }
    else
    {
        printf("%d is a odd number",a);
    }
}

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
   

    iseven(num);  //function call
    
}