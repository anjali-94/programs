#include <stdio.h>
int main()
{
    float a, b, c, x;
    for(int i =1;i<=2;i++){
    
    printf("%d. Enter the Values of a, b and c: ",i);
    scanf("%f %f %f", &a, &b, &c);
    x = a / b - c;
    printf("Final value of is : %.2f\n", x);
    }

    return 0;
}