#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 1024

// Function to encrypt or decrypt file using substitution cipher with key
void processFile(char *inputFileName, char *outputFileName, char *key) {
    FILE *inputFile, *outputFile;
    char buffer[MAX_BUFFER_SIZE];

    // Open input file for reading
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }

    // Open output file for writing
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        exit(EXIT_FAILURE);
    }

    // Process each character in the file
    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        for (int i = 0; buffer[i] != '\0'; ++i) {
            // Encrypt or decrypt each character based on the key
            char *pos = strchr(key, buffer[i]);
            if (pos != NULL) {
                int index = pos - key;
                buffer[i] = 'A' + index; // Assuming uppercase letters for simplicity
            }
        }
        // Write the processed buffer to the output file
        fprintf(outputFile, "%s", buffer);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);
}

int main() {
    char inputFileName[] = "plaintext.txt";
    char encryptedFileName[] = "encrypted.txt";
    char decryptedFileName[] = "decrypted.txt";
    char key[MAX_BUFFER_SIZE];

    // Prompt user for the key
    printf("Enter the encryption key (a permutation of characters): ");
    scanf("%s", key);

    // Encrypt the file
    processFile(inputFileName, encryptedFileName, key);
    printf("File encrypted successfully. Encrypted file: %s\n", encryptedFileName);

    // Decrypt the file
    processFile(encryptedFileName, decryptedFileName, key);
    printf("File decrypted successfully. Decrypted file: %s\n", decryptedFileName);

    return 0;
}
