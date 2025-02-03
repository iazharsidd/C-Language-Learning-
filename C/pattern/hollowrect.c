#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloumn : ");
    scanf("%d",&c);
    for (int i = 1; i<=r; i++)
    {
        for (int j = 1; j<=c; j++)
        {
            if (i==1||j==c||j==1||i==r)
            {           
            printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
