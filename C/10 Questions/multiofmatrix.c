#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows of first matrix : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloumns of first matrix : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of matrix 1 \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int a;
    printf("Enter the number of rows of second matrix : ");
    scanf("%d",&a);
    int b;
    printf("Enter the number of coloumns of second matrix : ");
    scanf("%d",&b);
    int brr[a][b];
    printf("Enter the elements of matrix 2 \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");
    if (c!=a)
    {
      printf("Can not be multiplied");
    }
    else
    {
     int res[r][b];
     for (int i = 0; i < r; i++)
     {
      for (int j = 0; j < b; j++)
      {
         res[i][j]=0;
           for (int  k = 0; k < c; k++)
            {
              res[i][j]+=arr[i][k]*brr[k][j];
           }
         }
     }
     for (int i = 0; i < r; i++)
     {
      for (int j = 0; j < b; j++)
      {
         printf("%d ",res[i][j]);
         }
            printf("\n");
      }
     }
    return 0;
}