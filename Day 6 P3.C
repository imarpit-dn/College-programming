#include <stdio.h>

int main() {
    int n, remainder, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;                
        reversed = reversed * 10 + remainder; 
        n = n / 10;                        
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
