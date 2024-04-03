#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the limit of an array:");
    scanf("%d",&n);
    printf("Elements of an array: ");
    for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<n;j++) {       
        if(arr[i]==arr[j])
        count++;
        }
        printf("frequency of %d is %d\n",arr[i],count);
    }

}