#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 'Z';
        for (int j = 1; j <=i; j++)
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}