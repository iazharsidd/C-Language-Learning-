#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    int a = 1, b = 1;

    if (n >= 1)
    {
        printf("%d ", a);
    }

    if (n >= 2)
    {
        printf("%d ", b);
    }

    for (int i = 3; i <= n; i++)
    {
        int sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}
