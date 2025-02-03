#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Eneter the number of rows :  ");
    scanf("%d",&r);
    int min = 0;
    for (int i = 1; i<=2*r-1; i++)
    {
       for (int j = 1; j<=2*r-1; j++)
        {
            int a = i;
            if (i>r)
            a= 2*r-i;
            int b = j;
            if(b>r)
            b=2*r-j;
            if (a<b)
            min = a;
            else 
            min = b;
            printf("%d",min);
        }
        printf("\n");
    }
    return 0;
}
