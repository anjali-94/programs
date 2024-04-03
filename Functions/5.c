#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i, isprime = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 1;
            break;
        }
    }

    if (isprime == 0)
        return 1;
    else
        return 0;
}

int is_perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int is_armstrong(int n)
{
    int sum = 0, rem;
    int original = n;
    int digit = (int)log10(n) + 1;
    while (n > 0)
    {
        rem = n % 10;
        sum += ceil(pow(rem, digit));
        n = n / 10;
    }
    if (sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int num, i;
    printf("enter a number: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    if (is_perfect(num))
        printf("%d is a perfect number\n", num);
    else
        printf("%d is not a perfect number\n", num);

    if (is_armstrong(num))
        printf("%d is an armstrong number\n", num);
    else
        printf("%d is not an armstrong number\n", num);
    

    return 0;
}
