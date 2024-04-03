#include <stdio.h>

int maxmin(int a, int b)   //function defination
{
    if (a > b)
    {
         printf("maximum number = %d\n", a);
        printf("minimum number = %d\n", b);
    }
    else
    {
        printf("maximum number = %d\n", b);
        printf("minimum number = %d\n", a);
    }
}

int main()
{
    int num1, num2;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    maxmin(num1, num2);  //function call
    
}