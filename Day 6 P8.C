#include <stdio.h>
int main() {
    int n, temp;
    long long fact = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        temp = n;
        while (temp > 1) {
            fact = fact * temp;
            temp--;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }
    return 0;
}
