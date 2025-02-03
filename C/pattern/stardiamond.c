5#include <Stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int a=r/2;
    int b=1;
    int m = r/2+1;
    for (int i = 1;i<=r; i++)
    {
        for (int j = 1; j<=a; j++)
        {
          printf(" ");
        }
        for (int k = 1; k<=b; k++)
        {
            printf("*");
        }
        if (i<m)
        {
          a--;
        b+=2;
        }
        else{
            a++;
            b-=2;
        }
        printf("\n");
    }
    return 0;
}
