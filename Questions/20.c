#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double computeSin(double x, int n) {
    double result = 0;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        int exponent = 2 * i + 1;
        double term = pow(x, exponent) / factorial(exponent);
        result += sign * term;
        sign *= -1;
    }

    return result;
}

int main() {
    double x; 
    int n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the Taylor series: ");
    scanf("%d", &n);

    double sinValue = computeSin(x, n);
    printf("sin(%lf) = %lf\n", x, sinValue);

    return 0;
}
