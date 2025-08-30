#include <stdio.h>

int main() {
    int num = 153;
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
