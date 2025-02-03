#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coulums : ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int indx=0;
    for (int i = 0; i < r; i++)
    {
        int count=0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j]==1)
            {
              count++;
            }
            if (max<count)
            {
               max=count;
               indx = i;
            }
        }
    }
     printf("%d\n",max);
     printf("%d\n",indx);
    return 0;
}
