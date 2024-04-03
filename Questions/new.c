#include <stdio.h>

int main() {
    char sentence[100]; // Assuming a maximum length of 100 characters for the sentence
    printf("Enter the sentence: ");
    scanf("%[^\n]", sentence);

    printf("You entered: %s\n", sentence);

    return 0;
}

