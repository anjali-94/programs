#include<iostream>
using namespace std;
//1---prine no.
//2--- not a prime no.
bool isprime(int n) {
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            return 0;
            }
}
return 1;
}


int main() {
    int n;
    cout <<"enter a number: ";
    cin>>n;
    if(isprime(n)) {
        cout<<"is a prime number";
    }
    else 
    cout<<"not a prime number";
    

    
    
}

