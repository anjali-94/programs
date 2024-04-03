#include <stdio.h>
int main()
{
    int arr[100];
    int n, sum = 0;
    printf("Enter the limit of an array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("Sum of all the elements of an array is %d ", sum);
}