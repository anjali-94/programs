#include<iostream>
#include <limits.h>

using namespace std;

int Max(int arr[],int n) {
    int max = INT_MIN;
    for(int i= 0;i<n;i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    return max;

}

int Min(int arr[],int n) {
    int min = INT_MAX;
    for(int i= 0;i<n;i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }
    return min;

}


int main() {
    int arr[8]= {45,88,93,55,10,64,7,36};

    cout<<"maximum is:" <<Max(arr,8)<<endl;
    cout<<"minimum is:" <<Min(arr,8)<<endl;

    }

