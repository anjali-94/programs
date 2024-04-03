#include <stdio.h>

// Function to calculate power
double power(double m, int n) {
    double result = 1.0;

    for (int i = 1; i <= n; ++i) {
        result *= m;
    }

    return result;
}

int main() {
    double base;
    int exponent = 2; //default value
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    // Call the power function and display the result
    double result = power(base, exponent);
    printf("%.2f raised to the power %d is: %.2f\n", base, exponent, result);

    return 0;
}



