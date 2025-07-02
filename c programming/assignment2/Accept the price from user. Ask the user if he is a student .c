#include <stdio.h>

void main() {
    float price, discount = 0.0, finalPrice;
    char isStudent;


    printf("Enter the purchase price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);  

    
    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500)
            discount = 0.20;
        else
            discount = 0.10;
    } else {
        if (price > 600)
            discount = 0.15;
        else
            discount = 0.0;
    }

    
    finalPrice = price - (price * discount);

    
    printf("Discount applied: %.0f%%\n", discount * 100);
    printf("Final price: %.2f\n", finalPrice);


}
