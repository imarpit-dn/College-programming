
#include <stdio.h>
#include <math.h>

void triangleType(int a, int b, int c)
{
    if(a == b && b == c)
    {
        printf("Equilateral Triangle\n");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }
}

// Function to find the area
float area(int a, int b, int c)
{
    float s, ar;

    s = (a + b + c) / 2.0;

    ar = sqrt(s * (s-a) * (s-b) * (s-c));

    return ar;
}

int main()
{
    int a, b, c;
    float result;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        triangleType(a, b, c);

        result = area(a, b, c);

        printf("Area of triangle = %.2f", result);
    }
    else
    {
        printf("Invalid Triangle");
    }

    return 0;
}

