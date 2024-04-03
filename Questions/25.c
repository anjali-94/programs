#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseText(char *input, char *output) {
    // Tokenize the input text into words
    char *word = strtok(input, " ");
    char reversed[1000] = "";

    while (word != NULL) {
        // Prepend each word to the beginning of the reversed string
        char temp[100];
        sprintf(temp, "%s %s", word, reversed);
        strcpy(reversed, temp);
        word = strtok(NULL, " ");
    }

    // Remove trailing space
    reversed[strlen(reversed) - 1] = '\0';

    // Write the reversed text to the output file
    FILE *outputFile = fopen(output, "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        exit(1);
    }

    fprintf(outputFile, "%s", reversed);

    fclose(outputFile);
}

int main() {
    // Input file name
    char inputFileName[] = "abc.txt";

    // Output file name
    char outputFileName[] = "xyz.txt";

    // Open the input file in read mode
    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        exit(1);
    }

    // Read the content from the input file
    fseek(inputFile, 0, SEEK_END);
    long fileSize = ftell(inputFile);
    fseek(inputFile, 0, SEEK_SET);

    char *content = (char *)malloc(fileSize + 1);
    fread(content, 1, fileSize, inputFile);
    content[fileSize] = '\0';

    fclose(inputFile);

    // Reverse the text and save it to the output file
    reverseText(content, outputFileName);

    printf("Text reversed and saved in '%s'\n", outputFileName);

    // Free allocated memory
    free(content);

    return 0;
}

