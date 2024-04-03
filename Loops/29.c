//not working in 3 digit number

#include<stdio.h>
#include<math.h>
int main() {
    int num,digits,first,last,temp;
    printf("Enter the number: ");
    scanf("%d",&num);

    digits = log10(num)+1; //number of digits
    last = num%10;  //last digit
    first = num/pow(10,digits-1); //first digit

    temp = first;
    first = last;
    last = temp;

    int Number = first*pow(10, digits-1) + num %((int)pow(10,digits-1));
    int swappedNumber = Number-first+last;
    printf("Swapped number: %d\n", swappedNumber);  


}


