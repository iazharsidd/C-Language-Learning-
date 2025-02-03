#include <stdio.h>
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
}
int main() {
    double num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    double result;
    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}