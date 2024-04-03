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

int func(int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        int factorial = fact(i);
        int sol = factorial / i;
        sol = sol + func(i - 1);
        return sol;
    }
}

int main()
{
    int num = 5;
    int result = func(num);
    printf("Answer is: %d", result);
    return 0;
}
