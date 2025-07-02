
#include<stdio.h>
void main() {
	int a,b,c;
	printf( "enter any three number");
	scanf("%d%d%d",&a,&b,&c);
	if (a >b) {
		if (a>c) {


			printf("The greatest number is: %d\n", a);
		} else if (b >= a && b >= c) {
			printf("The greatest number is: %d\n", b);
		} else {
			printf("The greatest number is: %d\n", c);
		}

	}
}