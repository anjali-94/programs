#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str; 
public:
    String() : str(nullptr) {}
    // Destructor to free memory
    ~String() {
        if (str != nullptr) {
            delete[] str;
        }
    }
    void display() const {
        if (str != nullptr) {
            cout << "String: " << str <<endl;
        } else {
            cout << "String is uninitialized." <<endl;
        }
    }
};

int main() {
    // Create an uninitialized string
    String uninitializedString;

    // Display the content of the uninitialized string
    uninitializedString.display();

    return 0;
}
