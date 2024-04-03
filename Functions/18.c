#include <stdio.h>

int sum_natural(int start,int end) {
    int sum;
    if(start>end) {
        return 0;
    }
    else{
       sum = start + sum_natural(start+1,end);
    }

    return sum;
}

int main() {
    int start, end;
    printf("enter the start value: ");
    scanf("%d", &start);
    printf("enter the end value: ");
    scanf("%d", &end);
    int result = sum_natural(start, end);
    printf("Sum of Natural numbers from %d to %d is: %d", start, end,result);
    (start, end);
    
    return 0;

}
