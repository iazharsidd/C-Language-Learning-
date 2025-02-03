#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int r, c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of coloumns : ");
    scanf("%d", &c);
    int arr[r][c];
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int min = INT_MAX;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j]<min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("%d", min);

    return 0;
}
