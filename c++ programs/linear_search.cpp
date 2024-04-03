#include<iostream>
using namespace std;

int found(int arr[],int n,int key) {
    for(int i=0;i<n;i++) {
        if(key==arr[i]) {
            return 1;
        }
        }
        return 0;
        }

int main() {
    int size,key;
    int arr[100];
    cout<<"enter the no. of elements in a array: ";
    cin>>size;
    cout<<"enter the elements: "<<endl;

    for(int i=0;i<size;i++) {
        cin>>arr[i];
        
    }
    cout<<"enter the no. to be found in a array: ";
    cin>>key;

    int get = found(arr,size,key);

    if(get){
        cout<<"number is present";
    }
    else {
        cout<<"number is absent";
    }

    
}