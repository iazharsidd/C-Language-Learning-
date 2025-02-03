#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter The Number of rows : ");
    scanf("%d",&r);
    for (int i = 1; i <=r; r--)     
    {
        for (int j = i; j<=r;  j++)
       {
        printf("%d",j);
        }
        printf("\n");
    }
    
return 0;

}