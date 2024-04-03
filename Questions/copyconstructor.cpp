#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(int x, int y){
        a = x;
        b = y;
    }
    A(A &ref){
        a = ref.a;
        b = ref.b;
    }
    void get() {
        cout<<"value of a is: "<<a<<endl<<"value of b is: "<<b<<endl;
    }

};

int main()
{
    A obj(10,70);
    A obj2 = obj;
    obj.get();
    obj2.get();
}