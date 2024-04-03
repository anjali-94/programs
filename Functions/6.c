#include <stdio.h>

int prime(int n)
{
    for (int j = 2; j <= n - 1; j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num, i;
    printf("enter the limit: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (prime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}