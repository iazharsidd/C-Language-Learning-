#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the Number of rows : ");
    scanf("%d",&r);
    int a=1;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=r-i; j++)
        {
            printf (" ");
        }
        for (int k = 1; k<=a; k++)
        {  
        printf("%d",k);
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}
