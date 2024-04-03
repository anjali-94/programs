//read content from a file

/*#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hi.txt", "r");
    if(ptr == NULL) {
    printf("file cannot be opened");
    }
    else{
        printf("file opened succesfully\n");
    }
    char c = fgetc(ptr);
    printf("the first character which i am reading is %c\n",c);
    c = fgetc(ptr);
    printf("the second character which i am reading is %c\n",c);

    return 0;

}*/

/*#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hi.txt", "r");
    int ch;

    while((ch = fgetc(ptr))!=EOF ) {
        printf("%c",ch);
    }

    return 0;

}*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hi.txt", "r");
    char string[100];

    while(fgets(string,100,ptr))  //99 characters will print
     {
        printf("%s",string);
    }

    return 0;
}

