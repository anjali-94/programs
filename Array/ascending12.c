#include <stdio.h>
int main()
{
    int arr[100];
    int n,i,temp;
    printf("Enter the limit of an array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            temp= arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;  
        }
        else 
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

        

}
