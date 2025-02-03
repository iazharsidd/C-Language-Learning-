#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : " );
scanf("%d",&r);

for (int i = 1; i <=r; i++)
{
        for (int j = 1; j <=r-i; j++)
        {
            printf(" ");
        }
        int a= 65;
        for (int k = 1; k <=i; k++)
        {
            char ch=(char)a;
            printf("%c",ch);
            a++;
        }
        printf("\n");
}
    return 0;
}
