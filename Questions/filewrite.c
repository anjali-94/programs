//write content in a file

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("haha.txt", "w");
    fputc('h',ptr);
    fputs("welcome to mmy new house",ptr);

    return 0;
}

