#include <iostream>
using namespace std;
class A
{
    public:
    virtual void disp()
    {
        cout << "its a class a";
    }
};
class B : public A{
    public:
    void disp()
    {
        cout << "its a class b";
    }

};


int main() {
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->disp();
    return 0;
}