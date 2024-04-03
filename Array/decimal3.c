#include <stdio.h>
int main()
{
    int num, i = 0;
    int octalnum[100];
    printf("enter a decimal number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        octalnum[i] = num % 8;
        num = num / 8;
        i++;
    }

    printf("Octal number: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octalnum[j]);
    }
}