#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
