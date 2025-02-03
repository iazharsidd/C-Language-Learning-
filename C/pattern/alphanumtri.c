#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter The Number of rows : ");
    scanf("%d",&r);
    for (int i = 1; i <=r; i++)
    { int a=1;
        for (int j = 1; j <=i; j++)
        {
            if (i%2==0)
            {
                int d=a+64;
                char ch = (char)d;
                printf("%c",ch);
                a++;
            }
            else
            printf("%d",j);
        }
        printf ("\n");
    }
    
    return 0;
}
