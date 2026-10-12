#include <stdio.h>

int main() {
    char op;
    double n1, n2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch (op) {
        case '+':
            result = n1 + n2;
            printf("%.2lf + %.2lf = %.2lf\n", n1, n2, result);
            break;

        case '-':
            result = n1 - n2;
            printf("%.2lf - %.2lf = %.2lf\n", n1, n2, result);
            break;

        case '*':
            result = n1 * n2;
            printf("%.2lf * %.2lf = %.2lf\n", n1, n2, result);
            break;

        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                printf("%.2lf / %.2lf = %.2lf\n", n1, n2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
