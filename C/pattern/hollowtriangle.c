#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j <r; j++)
        {
            if (i == 0 ||i == r-1 || j==0 || j==i )
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
