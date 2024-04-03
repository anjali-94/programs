#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a lowercase string of English alphabet characters: ";
    cin >> input;

    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            int base10 = c - 'a' + 10; 
            cout << base10 << " " << endl;
        } 
        else {
            cout << "Invalid character: " << c << endl;
        }
    }

    return 0;
}