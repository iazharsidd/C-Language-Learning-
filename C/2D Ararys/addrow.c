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
        for (int  j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int maxSum=0; 
    int maxIndx=0;
    for (int i = 0; i < r;i++)
    {
      int sum=0;
        for (int j = 0; j < c; j++)
        {
        sum=sum+arr[i][j];
        } 
        if (maxSum<sum)
        {
            maxSum=sum;
            maxIndx = i;
        }
    }
     printf("%d\n",maxSum);
     printf("%d",maxIndx);
    return 0;
}
