#include <iostream>
using namespace std;

void show(int age) {
    cout << "age is " << age << endl;
}

void show(double value) {
    cout << "value is " << value << endl;
}

void show(string name) {
    cout << "name is " << name << endl;
}

int main() {
    show("anjali"); // Calls the show(string) function
    show(34);       // Calls the show(int) function
    show(5.6);      // Calls the show(double) function
    return 0;
}
