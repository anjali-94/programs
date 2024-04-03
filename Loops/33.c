#include<stdio.h>
int main() {
int num,original_num,rem,reverse_num=0;
printf("enter a number: ");
scanf("%d",&num);

original_num = num;

while(num!=0) {
    rem = num %10;
    reverse_num = reverse_num*10+rem;
    num/=10;
}

if(original_num==reverse_num){
    printf("%d is a palindrome number",original_num);
}
else {
    printf("%d is not a palindrome number",original_num);
}


}
