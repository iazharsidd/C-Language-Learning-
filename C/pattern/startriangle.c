#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    // int c;
    // printf("Enter the number of columns : ");
    // scanf("%d",&c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;

}
