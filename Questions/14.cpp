#include <iostream>
using namespace std;

class MyClass {
private:
    int myInteger;
public:
    // Constructor with an integer argument
    MyClass(int value) : myInteger(value) {}

    // Constructor with a "char *" (string) argument
    MyClass( char *stringValue) : myInteger(atoi(stringValue)) {}  //atoi is a function that stands for "ASCII to Integer."

    int getValue() const {
        return myInteger;
    }
};

int main() {
    MyClass obj1(42);
    cout << "Value from constructor with integer argument: " << obj1.getValue() << endl;

    MyClass obj2("123");
    cout << "Value from constructor with char * argument: " << obj2.getValue() << endl;

    return 0;
}
