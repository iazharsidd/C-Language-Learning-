#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number n : ");
    scanf("%d",&n);
    int a=1;
    for (int i = 1; i<=n;  i++)
    {
        printf("%d ",a);
        a=a*2;
    } 
    return 0;
}
