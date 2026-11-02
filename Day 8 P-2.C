#include <stdio.h>

int sum(int n)
{
    int i, total = 0;

    for(i = 1; i <= n; i++)
    {
        total = total + i;
    }

    return total;
}

int main()
{
    int n, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum of natural numbers = %d", result);

    return 0;
}
