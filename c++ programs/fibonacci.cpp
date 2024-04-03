#include<iostream>
using namespace std;
//1---prine no.
//2--- not a prime no.
int fibonacci(int n) {
    int a=0,b=1,ans;
    cout <<a<< " " <<b<< " ";
    for(int i=3;i<=n;i++)
    {
        int ans =(a+b);
        cout<<ans<<" ";
        a=b;
        b=ans;
        
        }
}


int main() {
    int n;
    cout <<"enter a number: ";
    cin>>n;
    fibonacci(n);

}

    