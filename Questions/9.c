#include <stdio.h>

void swapNumbers(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sortNumbers(int *num1, int *num2) {
    // Ensure num1 is smaller than num2
    if (*num1 > *num2) {
        swapNumbers(num1, num2);
    }
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    // Call the function to sort the numbers
    sortNumbers(&num1, &num2);
    printf("Sorted numbers: %d %d\n", num1, num2);

    return 0;
}
