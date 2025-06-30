#include<stdio.h>
int main()
{
	int a=10,b=30;
	int temp;
	printf("before swapping: a = %d, b = %d\n", a, b);
    temp=a;
	a=b;
	b=temp;
	    printf("after swapping: a = %d, b = %d\n", a, b);

}