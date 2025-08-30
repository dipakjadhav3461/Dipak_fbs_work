#include <stdio.h>

int main() {
    int num = 28;
    int i = 1;
    int sum = 0;

    while (i < num) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == num) {
        printf(" perfect number.\n", num);
    } else {
        printf(" perfect number.\n", num);
    }


}
