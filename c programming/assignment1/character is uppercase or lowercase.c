#include <stdio.h>

void main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (isupper(c)) {
        printf("'%c' is an uppercase letter.\n", c);
    }
    else if (islower(c)) {
        printf("'%c' is a lowercase letter.\n", c);
    }
    else {
        printf("'%c' is not an alphabetic letter.\n", c);
    }

    
}
