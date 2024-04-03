#include <stdio.h>

int main()
{
    int x = 10;       
    int *ptr = &x;    // referencing: obtaining the memory address of 'x'
    int value = *ptr; // dereferencing: accessing the value at the memory location pointed to by 'ptr'
    return 0;
    printf("%d", *ptr);
    printf("%d", value);

    return 0;
}