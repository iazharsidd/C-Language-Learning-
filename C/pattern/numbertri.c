#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter The Number of rows : ");
    scanf("%d",&r);
    for (int i = 1; i <=r; i++)     
    {
        for (int j = i; j <=r;  j++)
       {
        printf("%d",i);
        }
        printf("\n");
    }
    
return 0;
}