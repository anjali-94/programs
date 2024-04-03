#include <stdio.h>

int func(int n)
{
    int rem,sum = 0;
    if (n<=9)
    {
        return n;
    }

    else
    {
        rem =n%10;
        sum += rem;
        return sum+func(n/10);
    }
}

int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    int result = func(num);
    printf("sum of all digits of %d is: %d", num, result);

    return 0;
}
