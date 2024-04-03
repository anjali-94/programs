
// error

#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, temp;
    printf("enter the limit of an array: ");
    scanf("%d", &n);
    printf("enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Reverse array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
