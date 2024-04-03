// A perfect number is a positive integer that is equal to the sum of its proper divisors,
// excluding itself. The smallest perfect number is 6, which is the sum of its divisors 1, 2, 
// and 3 (1 + 2 + 3 = 6).

#include <stdio.h>

int is_perfect(int c)
{
    int sum = 0;
    for (int j = 1; j <= c - 1; j++)
    {
        if (c % j == 0)
        {
            sum += j;
        }
    }
    if (sum == c)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num, i;
    printf("enter the limit: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (is_perfect(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}