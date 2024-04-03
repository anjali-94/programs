#include <stdio.h>
#include <math.h>

int power(int n,int p)
{
    if (p == 0)
    {
        return 1;
    }

    else
    {
        return n*power(n,p-1);
    }
}


int main()
{
    int num,pow;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("enter the power: ");
    scanf("%d", &pow);
    int result = power(num,pow);
    printf(" anser is %d", result);
    return 0;
}
