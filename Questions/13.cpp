#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;
public:
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}
    Box(double l, double b) : length(l), breadth(b), height(2.0) {}

    double Volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Box b1(5.0, 6.0, 9.2);
    Box b2(3.0, 7.0);
    cout << "Volume of Box1 is :" << b1.Volume() << endl;
    cout << "Volume of Box1 is :" << b2.Volume() << endl;
    reteurn 0;
}
