#include <stdio.h>
int main()
{
    int arr[100], n, i, rem, sum,count=0;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = 0;
        int temp = arr[i];
        while (arr[i] != 0)
        {
            rem = arr[i] % 10;
            sum += rem*rem*rem;
            arr[i] = arr[i] / 10;
        }
        if(sum==temp) {
            printf("%d is an armstrong number at %dth position of an array\n",temp,i);
            count++;
        }
        
    }
    printf("\nTotal armstrong no : %d",count);

}
