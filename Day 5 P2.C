#include <stdio.h>

int main() {
    int n, i;
    long long f = 1; 

    printf("Enter a number: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        f = f * i;
    }

    printf("The Factorial value is : %lld\n", f);

    return 0;
}
