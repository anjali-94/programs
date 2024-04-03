#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, x1, x2, img;
    printf("enter the first coefficient: ");
    scanf("%f", &a);
    printf("enter the second coefficient: ");
    scanf("%f", &b);
    printf("enter the third coefficient: ");
    scanf("%f", &c);
    d = (b * b) - (4 * a * c);

    switch (d > 0)
    {
    case 1:
    //if discriminant is positive
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f ", x1, x2);
        break;

    case 0:
    //if discriminant is not positive
        switch (d < 0)
        {
        case 1:
        //if discriminant is not negative
            x1 = x2 = -b / (2 * a);
            img = sqrt(-d) / (2 * a);
            printf("Two distincts complex roots exists: %.2f + i%.2f and %.2f - i%.2f", x1, img, x2, img);
            break;

        case 0:
        //if discriminant is zero
            x1 = x2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f ", x1, x2);
            break;
        }
    }
    return 0;
}