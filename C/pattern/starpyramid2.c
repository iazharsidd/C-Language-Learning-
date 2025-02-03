#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter The number of rows : ");
    scanf("%d",&r);
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=2*r-1; j++)
        {
            printf(" ");
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
