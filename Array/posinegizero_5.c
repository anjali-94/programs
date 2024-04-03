#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("Enter the limit of an array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\npositive numbers: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nnegative numbers: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nzeros: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]== 0)
        {
            printf("%d ", arr[i]);
        }
    }
}


