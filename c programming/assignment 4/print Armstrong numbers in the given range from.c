#include <stdio.h>


int main() {
    int n, num, temp, digits, rem;
    int sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (num = 1; num <= n; num++) {
        temp = num;
        digits = 0;
        sum = 0;

        
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        
        while (temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    
}
