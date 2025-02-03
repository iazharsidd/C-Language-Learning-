#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter Number of columns : ");
    scanf("%d",&m);
    for (int i = 0; i <n; i++)
    {
      for (int  j = 0; j <m; j++)
      {
        printf("* ");
      }
      printf("\n");
    }
    return 0;
}
