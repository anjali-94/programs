#include <stdio.h>

void func(float r, float *diameter, float*circumference, float *area) {
    *diameter = 2 * r;
    *circumference = 2 * 3.14 * r;
    *area = 3.14 * r * r;
}

int main() {
    float rad, d, c, a;
    printf("Enter the radius of a circle: ");
    scanf("%f", &rad);

    func(rad, &d, &c, &a);

    printf("Diameter of the circle is %f\n", d);
    printf("Circumference of the circle is %f\n", c);
    printf("Area of the circle is %f\n", a);

    return 0;
}
