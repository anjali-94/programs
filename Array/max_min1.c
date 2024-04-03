#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6] = {10, 17, 12, 9, 11, 8};
    int max,min, i, j;
    printf("Array : ");
    for (i = 0; i <= 5; i++)
    {
        printf("%d ", arr[i]);
    }

    max = INT_MIN;
    for (i = 0; i <= 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\n maximum value is: %d", max);

    min = INT_MAX;
    for (i = 0; i <= 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\n minimum value is: %d", min);
}




