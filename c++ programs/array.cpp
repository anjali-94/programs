#include<iostream>
using namespace std;

int printarray(int fourth[],int size) {
    cout<<endl<<"printing an array: "<< endl;
for(int i=0;i<size;i++) {
        cout<< fourth[i] << " ";
        }
}


int main(){
    int third[15] = {2,7};
    printarray(third,15);
    int thirdsize = sizeof(third)/sizeof(int);  //size = 40/4---(10*4/4)
    cout<<endl<<"size of third is: "<< thirdsize << endl;

    char ch[5] = {'a','b','5','7','k'};
    for(int i= 0;i<5;i++) {
    cout << ch[i]<<" ";
    }

}