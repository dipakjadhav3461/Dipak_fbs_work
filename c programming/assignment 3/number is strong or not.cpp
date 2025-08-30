#include <stdio.h>

int main() {
    int num = 145;
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;

        
        int fact = 1, i = 1;
        while (i <= digit) {
            fact *= i;
            i++;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }

    
}
