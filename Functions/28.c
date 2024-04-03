.//incomplete

#include<stdio.h>

void display_array(int arr[],int n)
{
    int i;
    if (!arr)
    {
        printf("array is empty");
    }
    else {
        for(i=0;i<n;i++) {
        printf("Array of %d elements is :%d ",n,arr[i]);
        }      
    }
}

int main()
{
    int arr[10] = {34,23,12,76,45,5,38,87,91,21};

    display_array(arr,10);
   
    return 0;

}