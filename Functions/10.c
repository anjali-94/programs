#include<stdio.h>
#include<limits.h>

int maximum(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int minimum(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++) {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}



int main()
{
    int arr[10] = {34,23,12,76,45,5,38,87,91,21};
    printf("Array: ");
    for(int i=0;i<10;i++) {
    printf("%d ",arr[i]);
    }
    int result1 = maximum(arr,10);
    printf("\nMaximum Value: %d",result1);
    int result2 = minimum(arr,10);
    printf("\nMinimum Value: %d",result2);
    return 0;

}