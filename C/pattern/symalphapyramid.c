#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int a=r-1;
    for (int i=1; i<=r; i++)
    { int b=65; int t=65;
        for (int l = 1; l<=a; l++)
        {
            printf(" ");
        }
        
        for (int j=1; j<=i; j++)
        {  
            char ch=(char)b;
           printf("%c",b);
           b++;   
        }

        for (int k = 1 ; k <=i-1; k++)
        {
            char c=(char)t;
            printf("%c",c);
          t++;
        }
        printf("\n");
        a--;
    }
    return 0;
}