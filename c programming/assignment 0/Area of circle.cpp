#include <stdio.h>
#define pi 3.14159
int main()
{
	float radius,area;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("Area of the circle with radius %.2f is %2f\n", radius,area);
}