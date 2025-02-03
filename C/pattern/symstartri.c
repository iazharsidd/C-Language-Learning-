#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int a = r;
    int b = 1;
    for (int s = 1; s<=2*r+1; s++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i<=r; i++)
    {
      for (int j = 1; j <=a; j++)
        { 
            printf("*");
        }
            for (int k = 1; k<=b; k++)
            {
                printf(" ");
            }
           for(int j = 1; j <=a; j++)
           { 
            printf("*");
           }
           a--;
           b+=2;
        printf("\n");
    }
    return 0;
}
