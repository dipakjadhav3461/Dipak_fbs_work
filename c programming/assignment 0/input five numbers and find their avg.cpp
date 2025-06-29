#include <stdio.h>

int main() 
{
    int num1 = 17;
    int num2 = 67;
    int num3 = 30;
    int num4 = 20;
    int num5 = 41;

    float average;
    average = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf("The average of %d, %d, %d, %d, and %d is %.2f\n",
           num1, num2, num3, num4, num5, average);

    return 0;
}
