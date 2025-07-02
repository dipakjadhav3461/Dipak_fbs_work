#include <stdio.h>

void main()
 {
    float basic, da, ta, hra, total;
    scanf("%f", &basic);
    if (basic <= 5000) {
        da = 0.10f * basic;
        ta = 0.20f * basic;
        hra = 0.25f * basic;
    } else {
        da = 0.15f * basic;
        ta = 0.25f * basic;
        hra = 0.30f * basic;
    }
    total = basic + da + ta + hra;
    printf("Total Salary = %.2f\n", total);
    
}
