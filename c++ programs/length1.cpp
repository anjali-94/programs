#include<iostream>
using namespace std;

int main() {

    string text1 = "hello";
    string text2 = "world";
    if (text1.length() == text2.length() ) {
        if (text1 == text2) {
            cout << "Strings are equal";
        }
        else {
            cout <<"Strings are not equal";
            }
            }
            else {
                cout << "Length of strings is not equal";
            }

}
