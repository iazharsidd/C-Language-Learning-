#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    for (int i = 1; i <=r; i++)
    {
        int a =1;
     for (int j = 1; j <=i; j++)
     {
        printf("%d",a);
        a=a+2;
     }
     printf("\n");
    }
    return 0;
}
