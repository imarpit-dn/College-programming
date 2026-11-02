
#include <stdio.h>

int maximum(int a[])
{
    int i, max;

    max = a[0];

    for(i = 1; i < 10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

int minimum(int a[])
{
    int i, min;

    min = a[0];

    for(i = 1; i < 10; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}

int main()
{
    int a[10], i, max, min;

    printf("Enter 10 elements: ");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    max = maximum(a);
    min = minimum(a);

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}

