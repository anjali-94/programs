#include <stdio.h>

int sum_even(int start, int end) {
    int sum = 0;
    if (start <= end) {
        if (start % 2 == 0) {
            sum = start + sum_even(start + 2, end);
        } else {
            sum = sum_even(start + 1, end); 
        }
    }
    return sum;
}

int sum_odd(int start, int end) {
    int sum = 0;
    if (start <= end) {
        if (start % 2 != 0) {
            sum = start + sum_odd(start + 2, end);
        } else {
            sum = sum_odd(start + 1, end); 
        }
    }
    return sum;
}

int main() {
    int start, end;
    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the end value: ");
    scanf("%d", &end);

    int sum1 = sum_even(start, end);
    printf("Sum of all even numbers from %d to %d is: %d\n", start, end, sum1);

    int sum2 = sum_odd(start, end);
    printf("Sum of all odd numbers from %d to %d is: %d\n", start, end, sum2);

    return 0;
}
