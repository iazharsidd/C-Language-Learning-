#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            if ((i+j)%2==0)
            {
                printf("1 ");
            }
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
