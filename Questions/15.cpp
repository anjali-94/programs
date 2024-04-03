#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) : real(r), imaginary(i) {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Complex() {
        cout << "Destructor called" << endl;
    }

    // Function to add two complex numbers
    Complex addComp(Complex C1, Complex C2) {
        // creating temporary variable
        Complex temp;

        // adding real part of complex numbers
        temp.real = C1.real + C2.real;

        // adding Imaginary part of complex numbers
        temp.imaginary = C1.imaginary + C2.imaginary;

        // returning the sum
        return temp;
    }

    // Function to multiply two complex numbers
    Complex multiplyComp(Complex C1, Complex C2) {
        // creating temporary variable
        Complex temp;

        // multiplying real and imaginary parts of complex numbers
        temp.real = (C1.real * C2.real) - (C1.imaginary * C2.imaginary);
        temp.imaginary = (C1.real * C2.imaginary) + (C1.imaginary * C2.real);

        // returning the product
        return temp;
    }

    // Function to display the complex number
    void display() const {
        cout << "Real: " << real << " Imaginary: " << imaginary << endl;
    }
};

int main() {
    // Creating complex numbers
    Complex complex1(2.0, 3.0);
    Complex complex2(1.5, 2.5);

    // Creating a temporary complex number by adding complex1 and complex2
    Complex sum = complex1.addComp(complex1, complex2);

    // Creating a temporary complex number by multiplying complex1 and complex2
    Complex product = complex1.multiplyComp(complex1, complex2);

    // Displaying the sum
    cout << "Sum: ";
    sum.display();

    // Displaying the product
    cout << "Product: ";
    product.display();

    // Destructor will be automatically called when objects go out of scope
    return 0;
}
