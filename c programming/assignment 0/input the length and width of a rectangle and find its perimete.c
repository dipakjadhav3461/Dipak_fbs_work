#include <stdio.h>

int main() {
	int length = 14;
	int width = 5;
	int perimeter;

	perimeter = 2 * (length + width);

	printf("Length = %d\n", length);
	printf("Width = %d\n", width);
	printf("Perimeter of the rectangle = %d\n", perimeter);

	return 0;
}
