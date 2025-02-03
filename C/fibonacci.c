#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enetr The Number " );
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    printf("%d ",a);
    printf("%d ",b);
    for (int i = 1; i<=n-2; i++)
    {
        sum = a+b;
        printf(" %d ",sum);
        a=b;
        b=sum;
    }
    return 0;
}