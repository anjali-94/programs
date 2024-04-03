#include <stdio.h>

void natural(int start, int end)
{
    if (start < 1|| start > end )
    {
        return;
    }

    else
    {
        printf("%d ", start);
        natural(start + 1, end);
    }
}


int main()
{
    int start, end;
    printf("enter the start value: ");
    scanf("%d", &start);
    printf("enter the end value: ");
    scanf("%d", &end);
    printf("Natural numbers from %d to %d are:", start, end);
    natural(start, end);
    
    return 0;
}
