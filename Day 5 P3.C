#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c; 

    printf("Enter a number:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) { 
        printf("%d \t", a);      
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
