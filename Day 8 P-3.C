#include <stdio.h>

int hcf(int a, int b)
{
    int i, h;

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            h = i;
        }
    }

    return h;
}

int lcm(int a, int b)
{
    int result;

    result = (a * b) / hcf(a, b);

    return result;
}

int main()
{
    int num1, num2, HCF, LCM;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    HCF = hcf(num1, num2);
    LCM = lcm(num1, num2);

    printf("HCF = %d\n", HCF);
    printf("LCM = %d", LCM);

    return 0;
}
