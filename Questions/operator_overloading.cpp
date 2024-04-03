#include <iostream>
using namespace std;
class demo
{
    int a;
    public:
    void set()
    {
        cout << "enter the no.";
        cin >> a;
    }
    void get()
    {
        cout << "Value = " << a << endl;
    }
    demo operator+(demo bb)
    { // cc = aa+bb;
        demo cc,aa;
        cc.a = a + bb.a;
        return cc;
    }
};

int main() {
    demo aa, bb, cc;
    aa.set();
    bb.set();
    cc = aa+bb;
    aa.get();
    bb.get();
    cc.get();

    return 0;
}