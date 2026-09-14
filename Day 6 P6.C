#include <stdio.h>
#include <math.h>
int main() {
    int num, original, temp, digits = 0, sum = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        sum += round(pow(rem, digits)); 
        temp /= 10;
    }

    if (original == sum)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
