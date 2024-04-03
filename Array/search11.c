#include <stdio.h>
int main()
{
    int arr[100];
    int n, num, i;
    printf("Enter the limit of an array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be search: ");
    scanf("%d", &num);

    int found =0;

    for (i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            found=1;
            break;           
        }
    }

    if(found==1) {
        printf("Number is present in an array");
    }
    else {
    printf("Number is not present in an array");
    }

}
