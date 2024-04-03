#include <stdio.h>

void even(int start, int end){
    if (start > end) {
        return;
    }
    else {
        if (start % 2 == 0) {
            printf("%d ", start);
        }
        even(start + 1, end);
    }
}

void odd(int start, int end){
    if (start > end){
        return;
    }
    else{
        if (start % 2 != 0){
            printf("%d ", start);
        }
         odd(start + 1, end);
    }
}

int main()
{
    int start, end;
    printf("enter the startvalue: ");
    scanf("%d", &start);
    printf("enter the end value: ");
    scanf("%d", &end);
    printf("Even numbers from %d to %d are:", start, end);
    even(start, end);
    printf("\nOdd numbers from %d to %d are:", start, end);
    odd(start, end);
    return 0;
}
