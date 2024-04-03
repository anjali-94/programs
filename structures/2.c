#include <stdio.h>

// Define the structure for a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtract(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiply(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return result;
}

int main() {
    struct Complex num1, num2, result;

    // Input for the first complex number
    printf("Enter the real and imaginary parts of the first complex number:\n");
    printf("Real: ");
    scanf("%f", &num1.real);
    printf("Imaginary: ");
    scanf("%f", &num1.imag);

    // Input for the second complex number
    printf("Enter the real and imaginary parts of the second complex number:\n");
    printf("Real: ");
    scanf("%f", &num2.real);
    printf("Imaginary: ");
    scanf("%f", &num2.imag);

    // Perform addition
    result = add(num1, num2);
    printf("Sum: %.2f + %.2fi\n", result.real, result.imag);

    // Perform subtraction
    result = subtract(num1, num2);
    printf("Difference: %.2f + %.2fi\n", result.real, result.imag);

    // Perform multiplication
    result = multiply(num1, num2);
    printf("Product: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
