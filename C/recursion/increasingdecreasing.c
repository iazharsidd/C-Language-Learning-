#include <stdio.h>
void increasing(int x ,int n)
{
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
void decreasing(int n)
{
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n); 
    decreasing(n);
    increasing(1,n);
    return 0;
}