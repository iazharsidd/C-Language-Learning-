#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    for (int i=1; i<=r; i++)
    {
        for (int j = 1; j <=r; j++)
        {
            int a = r/2+1;
            if (j==a||i==a)
            printf ("*");
            else
            printf (" ");
        }
        printf ("\n");
    }
    
    return 0;
}
