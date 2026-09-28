#include <stdio.h>

int main() {
    int i, j, space;
    int n = 3; 
    for (j = 1; j <= n; j++) {
        printf("%d ", j);
    }
    for (j = n - 1; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");

    for (i = n - 1; i >= 1; i--) {

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

    
        int missing_numbers = 2 * (n - i) - 1;
        for (space = 1; space <= missing_numbers * 2; space++) {
            printf(" ");
        }

        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
