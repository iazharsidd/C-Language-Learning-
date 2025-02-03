#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for (int i = 1; n>0 ; i++)
    {
        printf("%d ",n);
        n=n-3;
        
    }
    return 0;
}
