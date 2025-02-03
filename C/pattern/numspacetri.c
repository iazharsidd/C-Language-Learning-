#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int a = r;
    int b = 1;
    for (int s=1; s<=2*r+1; s++)
    {
        printf("%d",s);
    }
    printf("\n");
    for (int i = 1; i<=r; i++)
    { 
        int m=1;
      for (int j = 1; j <=a; j++)
        { 
            printf("%d",m);
            m++;
        }
            for (int k = 1; k<=b; k++)
            {
                printf(" ");
                m++;
            }
           for(int j = 1; j <=a; j++)
           { 
            printf("%d",m);
            m++;
           }
           a--;
           b+=2;
        printf("\n");
    }
    return 0;
}
