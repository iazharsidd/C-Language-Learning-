#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter th enumber of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloumns : ");
    scanf ("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c ; j++)
        {
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
                printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
