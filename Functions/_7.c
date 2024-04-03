// An Armstrong number (also known as a narcissistic number, pluperfect digital invariant,
// or pluperfect number) is a number that is the sum of its own digits each raised to the power
// of the number of digits. For example, 153 is an Armstrong number because:

#include <stdio.h>
#include <math.h>

int is_armstrong(int c)
{
    int sum = 0, rem;
    int original = c;
    int digit = (int) log10(c) + 1;
    while (c > 0)
    {
        rem = c % 10;
        sum += ceil(pow(rem, digit));
        c = c / 10;
    }
    if (sum == original)
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
    for (i = 1; i <= num; i++)
    {
        if (is_armstrong(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
