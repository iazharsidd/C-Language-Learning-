#include <stdio.h>
int main()
{
    char operator;
    double m, n, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &m, &n);
    if (operator== '+')
    {
        result = m + n;
    }
    else if (operator== '-')
    {
        result = m - n;
    }
    else if (operator== '*')
    {
        result = m * n;
    }
    else if (operator== '/')
    {
        result = m / n;
    }
    else
    {
        printf("Invalid operator!\n");
        return 1;
    }
    printf("%.2lf %c %.2lf = %.2lf\n", m, operator, n, result);
    return 0;
}