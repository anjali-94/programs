#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hi.txt", "r");
    if(ptr == NULL) {
    printf("\ncan't open file or file doesn't exist");
    
    }
    fseek(ptr,0,SEEK_END);
    printf("The size of file: %ld bytes\n",ftell(ptr));

}


