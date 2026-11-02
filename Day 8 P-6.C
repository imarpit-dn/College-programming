
#include <stdio.h>

// Recursive function to find sum
int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Please enter a positive number");
    }
    else
    {
        result = sum(n);

        printf("Sum of natural numbers = %d", result);
    }

    return 0;
}

