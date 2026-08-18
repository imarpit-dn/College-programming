#include <stdio.h>

int main() {
    int n = 478;
    int s = 0;
    int l;

    printf("Original Number: %d\n", n);

    
    l = n % 10;
    s = s + l;
    n = n / 10;

    
    l = n % 10;
    s = s + l;
    n = n / 10;

    
    l = n % 10;
    s = s + l;

    printf("Sum of digits: %d\n", s);

    return 0;
}
