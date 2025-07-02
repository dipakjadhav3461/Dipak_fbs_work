#include <stdio.h>

void main() {
    int n, first, last;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Error: Please enter exactly 3 digits.\n");
        return 1;
    }

    first = n / 100;  
    last  = n % 10;    

    if (first == last)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

}

