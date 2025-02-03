#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter thr number of rows : ");
    scanf("%d",&r);
    int a=r;
    int b=1;
    for (int s = 1; s <=2*r+1; s++)
    {
        int d=s+64;
        char ch =(char)d;
        printf("%c",ch);
    }
    printf("\n");
    for (int i = 1; i<=r; i++)
    {
        int m=65;
        char c =(char)m;
        for (int j = 1; j<=a; j++)
        {
        char c =(char)m;
         printf("%c",c);
        m++;
        }
        for (int k = 1; k <=b; k++)
        {
             char c =(char)m;
            printf(" ");
            m++;
        }
         for (int j = 1; j<=a; j++)
        {
        char c =(char)m;
         printf("%c",c);
         m++;
        }
        a--;
        b+=2;
        printf("\n");
    }
    
    return 0;
}