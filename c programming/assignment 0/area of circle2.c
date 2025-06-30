#include <stdio.h>

int main() {
    float radius = 7.0;           
    float area;
    const float PI = 3.14159;     

    area = PI * radius * radius;

    printf("Radius of the circle: %.2f\n", radius);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
