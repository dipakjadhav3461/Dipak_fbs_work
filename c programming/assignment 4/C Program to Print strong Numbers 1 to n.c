#include <stdio.h>


int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, num, temp, digit, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (num = 1; num <= n; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }


}
