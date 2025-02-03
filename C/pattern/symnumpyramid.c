#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int a=r-1;
    for (int i=1; i<=r; i++)
    { 
        for (int l = 1; l<=a; l++)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {     
           printf("%d",j);   
        }
        for (int k = 1 ; k <=i-1; k++)
        {
            printf("%d",k);
        }
        printf("\n");
        a--;
    }
    return 0;
}