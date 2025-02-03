#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n>0)
    {
        for (int i = 1; i < 2*n; i++)
        {
            for (int j = 1; j < 2*n; j++)
            {
                if (i == 1 || i == 2*n-1 || j == 1 || j == 2*n-1)
                {
                    printf("%d", n);
                }
            }
            printf("\n");
        }
        n--;
    }
    return 0;
}
