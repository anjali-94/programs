.//incomplete

#include <stdio.h>
#include <limits.h>

int find_maximum(int arr[], int n, int j) {
   int max = INT_MIN;
         int num = max;
    if (j==n) {
        return 0;
    }
    else {
         
        if (arr[j] > num)
        {
            num = arr[j];
            find_maximum(arr, n, j + 1);
        }
    }

    return num;
}

int main()
{
    int arr[100], n, i;
    
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int Sum =  find_maximum(arr, n, 0);
    printf("Maximum Number is: %d ", Sum);

    return 0;
}
