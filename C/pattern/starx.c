#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter The Number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter The Number of column : ");
    scanf("%d",&c);
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=c; j++)
        {
            if (i==j||i+j==r+1)
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
