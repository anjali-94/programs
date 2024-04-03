#include <iostream>
#include <cmath>
using namespace std;

class Rectangle;
class Polar
{
private:
    double radius;
    double angle; // Angle in radians

public:
    Polar(double r, double a) : radius(r), angle(a) {}

    // Conversion routine from polar to rectangular coordinates
    Rectangle toRectangular() const;

    void display() const
    {
        cout << "Polar Coordinates: (r = " << radius << ", Theta = " << angle << " radians)" << endl;
    }
};

class Rectangle
{
private:
    double x;
    double y;

public:
    Rectangle(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Conversion routine from rectangular to polar coordinates
    Polar toPolar() const;

    void display() const
    {
        cout << "Rectangular Coordinates: (x = " << x << ", y = " << y << ")" << endl;
    }
};

// Implementation of conversion routines

Rectangle Polar::toRectangular() const
{
    double xVal = radius * cos(angle);
    double yVal = radius * sin(angle);
    return Rectangle(xVal, yVal);
}

Polar Rectangle::toPolar() const
{
    double r = sqrt(x * x + y * y);
    double theta = atan2(y, x);
    return Polar(r, theta);
}

int main()
{
    // Example usage
    Polar polarPoint(5.0, 1.047); // (5.0, 60 degrees in radians)
    polarPoint.display();

    // Convert polar coordinates to rectangular coordinates
    Rectangle rectangularPoint = polarPoint.toRectangular();
    rectangularPoint.display();

    // Example with rectangular coordinates
    Rectangle rectPoint(3.0, 4.0); // (3.0, 4.0)
    rectPoint.display();

    // Convert rectangular coordinates to polar coordinates
    Polar polarPoint2 = rectPoint.toPolar();
    polarPoint2.display();

    return 0;
}
