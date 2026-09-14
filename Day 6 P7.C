#include <stdio.h>

int main() {
    int n, a = 0, b = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (n > 0) {
        printf("%d ", a);

        b = a + b;  
        a = b - a;  

        n--;        
    }

    printf("\n");
    return 0;
}
