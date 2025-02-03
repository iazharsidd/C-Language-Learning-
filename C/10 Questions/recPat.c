#include <stdio.h>

void printPattern(int r, int i, int j)
{
    if (i > r)
    {
        return; // Base case: Stop recursion when i exceeds the number of rows
    }

    if (i % 2 == 0)
    {
        int d = j + 64;
        char ch = (char)d;
        printf("%c", ch);
    }
    else
    {
        printf("%d", j);
    }

    if (j < i)
    {
        printPattern(r, i, j + 1); // Recursive call to print the next character
    }
    else
    {
        printf("\n");
        printPattern(r, i + 1, 1); // Move to the next row and reset j to 1
    }
}

int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printPattern(r, 1, 1);
    return 0;
}