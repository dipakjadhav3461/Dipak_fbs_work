#include <stdio.h>

void main() 
{
    double a, b;
    char op;
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 1;
    switch (op) {
        case '+': printf("%.2lf\n", a + b); break;
        case '-': printf("%.2lf\n", a - b); break;
        case '*': printf("%.2lf\n", a * b); break;
        case '/': 
            if (b != 0) printf("%.2lf\n", a / b);
            else printf("Error: div by zero\n");
            break;
        case '%':
            if ((long)b != 0) printf("%lld\n", (long long)a % (long long)b);
            else printf("Error: mod by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    
}
