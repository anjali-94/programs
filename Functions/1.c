#include <stdio.h>

int func(int a)
{
    int result;
    result = a * a * a;
    return result;
}

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    int cube = func(num);
    printf("Cube of a %d is %d ",num,cube);
}