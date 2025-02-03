#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int n; // Adjust this value to control the size of the pattern
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            printf("%d ", 1+n - min(min(i , j), min(2 * n - i, 2 * n - j )));
        }
        printf("\n");
    }

    return 0;
}
