// binary to decimal and vice versal

#include <stdio.h>
#include <math.h>

int bin_to_deci(int num) {
    printf("\nBinary to Decimal Conversion\n");
    int sum = 0, i = 0;
    while (num != 0) {
        int rem = num % 10;
        sum += rem * pow(2, i);
        i++;
        num = num / 10;
    }
    return sum;
}

int deci_to_bin(int num) {
    int arr[50], i = 0, j;
    printf("\nDecimal to Binary Conversion\n");
    while (num > 0) {
        arr[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    printf("\n");
}

int main() {
    int bin_num, deci_num;
    printf("Enter a binary number: ");
    scanf("%d", &bin_num);
    printf("Enter a decimal number: ");
    scanf("%d", &deci_num);

    int decimal = bin_to_deci(bin_num);
    printf("Decimal equivalent: %d\n", decimal);

    printf("Binary equivalent: ");
    deci_to_bin(deci_num);

    return 0;
}
