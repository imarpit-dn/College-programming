#include <stdio.h>

int main() {
    int roll1, roll2;
    float m1, m2, m3, m4, m5;
    float percent1, percent2;

    // Student 1
    printf("Enter Roll Number for Student 1: ");
    scanf("%d", &roll1);
    printf("Enter marks in 5 subjects: \n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    percent1 = (m1 + m2 + m3 + m4 + m5) / 5.0;

    // Student 2
    printf("Enter Roll Number for Student 2: ");
    scanf("%d", &roll2);
    printf("Enter marks in 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    percent2 = (m1 + m2 + m3 + m4 + m5) / 5.0;

    // Comparison using Ternary Operator
    printf("--- Result ---\n");
    (percent1 > percent2) ? printf("Roll Number %d scored highest: %.2f\n", roll1, percent1) :
    (percent2 > percent1) ? printf("Roll Number %d scored highest: %.2f\n", roll2, percent2) :
                            printf("Both students tied with: %.2f\n", percent1);

    return 0;
}
