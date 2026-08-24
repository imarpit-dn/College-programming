#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Step 1: Find max between first two
    max = (a > b) ? a : b;

    // Step 2: Compare result with the third
    max = (max > c) ? max : c;

    printf("The maximum number is: %d\n", max);

    return 0;
}
