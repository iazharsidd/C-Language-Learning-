#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloumns : " );
    scanf("%d",&c);
    int max = 0;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(max<arr[i][j])
            {
            max=arr[i][j];
            }
        }
    }
      printf("%d",max);
      printf("\n");
       for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j]==max)
            {
            printf("%d,%d",i,j);
            }
        }
    }
    return 0;
}
