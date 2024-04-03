#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    int result = fact(num);
    printf("factorial of %d is: %d", num, result);

    return 0;
}
