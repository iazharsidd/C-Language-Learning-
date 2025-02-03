#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter The number of rows : ");
    scanf("%d",&r);
     int a=1;
     for (int i = 1; i <=r; i++)
     {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",a);
             a=a+2;
        }
        printf("\n");
     }
     return 0;
}