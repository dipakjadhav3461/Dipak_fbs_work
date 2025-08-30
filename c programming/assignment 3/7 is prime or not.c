#include <stdio.h>

int main() {
    int num = 7;
    int i = 2;
    int isPrime = 1;  

    while (i < num) {
        if (num % i == 0) {
            isPrime = 0;  
        
        }
        i++;
    }

    if (isPrime && num > 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    
}
