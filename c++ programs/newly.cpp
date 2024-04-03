#include<iostream>
#include <limits.h>

using namespace std;

void swap(int arr[],int n) {
    for(int i= 0;i<n;i+=2) {
        if(i+1<n) {
         swap(arr[i], arr[i+1]);      
        }

    }

}

int printarray(int arr[],int size) {
    for(int i= 0;i<size;i++) {
        cout<<arr[i]<<" ";       
         } 
    }


int main() {
    int arr[8]= {4,8,9,5,1,6,7,3};
    swap(arr,8);
    printarray(arr,8);
    
    
    }

