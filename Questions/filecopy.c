#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr1, *ptr2;
    char filename[100], c;

    printf("Enter the file name to open for reading \n");
    scanf("%s",filename);
    ptr1 = fopen(filename, "r");
    if (ptr1 == NULL)
    {
        printf("cannot open file %s\n", filename);
        exit(0);
    }

    printf("Enter the file name to open for writing \n");
    scanf("%s",filename);
    ptr2 = fopen(filename, "w");
    if (ptr2 == NULL)
    {
        printf("cannot open file %s\n", filename);
        exit(0);
    }

    c = fgetc(ptr1);
    while(c != EOF)
    {
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }

    printf("\nContents copied to %s",filename);

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}