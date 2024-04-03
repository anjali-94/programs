#include <stdio.h>

enum color{red,yellow,blue =9,pink,brown};

int main() {
    printf("red: %d ", red);
    printf("yellow: %d ", yellow);
    printf("blue: %d ", blue);
    printf("pink: %d ", pink);
    printf("brown: %d ",brown);
    return 0;
}
