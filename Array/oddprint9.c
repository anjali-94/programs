#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the limit of an array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Odd elements in a array: ");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf(" %d ", arr[i]);
        }
    }
    
}