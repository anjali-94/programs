#include <stdio.h>
#include <string.h>


int areAnagrams(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, the strings can't be anagrams
    if (len1 != len2) {
        return 0; 
    }

    // Sort the characters in both strings
    // This can be done using any sorting algorithm
    // Here, I'm using the bubble sort algorithm for simplicity
    for (int i = 0; i < len1 - 1; i++) {
        for (int j = 0; j < len1 - i - 1; j++) {
            if (str1[j] > str1[j + 1]) {
                // Swap characters if they are in the wrong order
                char temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
            if (str2[j] > str2[j + 1]) {
                // Swap characters in the second string
                char temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

    // Compare the sorted strings
    if (strcmp(str1, str2) == 0) {
        return 1; // Return true if the sorted strings are equal
    } 
    else {
        return 0; // Return false otherwise
    }
}

int main() {
    char str1[50], str2[50];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams");
    } 
    else {
        printf("The strings are not anagrams");
    }

    return 0;
}
