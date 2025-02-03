#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloumns : ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
         printf("\n");
    }
    int l;
    printf("Enter the starting of row  : ");
    scanf("%d",&l);
    int l2;
    printf("Enter the end of row  : ");
    scanf("%d",&l2);
    int b;
    printf("Enter the start of coloumn  : ");
    scanf("%d",&b);
    int b2;
    printf("Enter the end of coloumn  : ");
    scanf("%d",&b2);
    int sum=0;
    for (int i = l; i <=l2; i++)
    {
     for (int j = b; j <=b2; j++)
     {
      sum=sum+arr[i][j];
     }
    }
     printf("%d",sum);
    return 0;
}