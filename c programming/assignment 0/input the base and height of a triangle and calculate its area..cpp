#include <stdio.h>

int main() {
    float base = 10.0;   // Hardcoded base value
    float height = 5.0;  // Hardcoded height value
    float area;

    area = 0.5 * base * height;

    printf("Base = %.2f\n", base);
    printf("Height = %.2f\n", height);
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
