.// binary to octal and vice versal

#include <stdio.h>
#include <math.h>

int bin_to_octal(int num) {
    int sum = 0, i = 0;
    while (num != 0) {
        int rem = num % 10;
        sum += rem * pow(8, i);
        i++;
        num = num / 10;
    }
     int arr[50], j;
    while (sum > 0) {
        arr[i] = sum % 2;
        sum = sum / 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    printf("\n");
}

int octal_to_bin(int num) {
    int arr[50], i = 0, j;
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
    int bin_num, octal_num;
    printf("Enter a binary number: ");
    scanf("%d", &bin_num);
    printf("Enter a octal number: ");
    scanf("%d", &octal_num);

    int octal = bin_to_octal(bin_num);
    printf("octal equivalent: %d\n", octal);

    printf("Binary equivalent: ");
    octal_to_bin(octal_num);

    return 0;
}
