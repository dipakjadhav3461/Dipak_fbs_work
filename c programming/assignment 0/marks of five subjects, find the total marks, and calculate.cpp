#include <stdio.h>

int main() {

    int subject1 = 93;
    int subject2 = 61;
    int subject3 = 91;
    int subject4 = 77;
    int subject5 = 74;

    int total_marks;
    float percentage;

    total_marks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total_marks / 500.0) * 100;

    printf("Marks in Subject 1: %d\n", subject1);
    printf("Marks in Subject 2: %d\n", subject2);
    printf("Marks in Subject 3: %d\n", subject3);
    printf("Marks in Subject 4: %d\n", subject4);
    printf("Marks in Subject 5: %d\n", subject5);
    printf("Total Marks: %d / 500\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
