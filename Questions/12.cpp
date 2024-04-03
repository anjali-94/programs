#include <iostream>
#include <cmath>
using namespace std;

double volume(double side) {
    return pow(side, 3);
}

double volume(double length, double width, double height) {
    return length * width * height;
}

double volume(int radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double cubeSide = 3.0;
    cout << "Volume of Cube: " << volume(cubeSide) << endl;

    double cuboidLength = 4.0, cuboidWidth = 5.0, cuboidHeight = 6.0;
    cout << "Volume of Cuboid: " << volume(cuboidLength, cuboidWidth, cuboidHeight) << endl;

    double circleRadius = 2;
    cout << "Volume of Circle: " << volume(circleRadius) << endl;
    return 0;
}
