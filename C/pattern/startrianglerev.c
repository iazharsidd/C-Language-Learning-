#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the Number of rows : ");
    scanf("%d",&r);
    for (int i = 1; i <=r; i++)
    {
        for (int j = r; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
