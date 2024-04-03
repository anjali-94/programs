
.//error
#include <stdio.h>
#include <math.h>

int reverse_num(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        int lastDigit = n % 10;
        int remainingDigits = n / 10;
        int reversed = reverse_num(remainingDigits);
        return lastDigit * pow(10, printf("%d", remainingDigits)) + reversed;
    }
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int result = reverse_num(num);
    printf("Reverse of the number %d is: %d\n", num, result);

    return 0;
}
