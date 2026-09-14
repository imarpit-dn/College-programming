#include <stdio.h>

int main() {
    int n, original, remainder, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while (n > 0) {
        remainder = n % 10;                    
        reversed = reversed * 10 + remainder; 
        n = n / 10;                            
    }

    // Compare original number with the reversed number
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
