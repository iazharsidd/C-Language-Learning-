#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter The Number of rows : ");
    scanf("%d",&r);
    int b=1;
    for (int i = 1; i <=r; i++)
    {
        int a=65;
        for (int j = 1; j <=r-i; j++)
        {
        printf(" ");
        }
        for (int k=1; k<=b; k++)
        {
            char ch=(char)a;
            printf("%c",ch);
            a++;
        }
        b=b+2;
        printf("\n");   
    }
    return 0;
}
