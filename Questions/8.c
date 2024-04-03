#include <stdio.h>

void getPreviousAndNext(int num, int *previous, int *next) {
    *previous = num - 1;
    *next = num + 1;
}

int main() {
    // Input a number
    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    int previousNumber, nextNumber;

    // Call the function 
    getPreviousAndNext(inputNumber, &previousNumber, &nextNumber);

    printf("Previous number: %d\n", previousNumber);
    printf("Next number: %d\n", nextNumber);

    return 0;
}
