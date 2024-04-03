#include<stdio.h>
int main()
{
    int arr[100];
    int n,sum=0;
    printf("Enter the limit of an array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    float avg = sum/n;
    printf("Sum of all the elements in an array is %d ",sum);
    printf("Average of all the elements in an array is %.2f",avg);


}