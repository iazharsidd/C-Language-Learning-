#include <stdio.h>
int stair(int n)
{
    if(n<=3)
    return n;
    int totalWays = stair(n-1)+ stair(n-2)+stair(n-3);
    return totalWays;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Eneter the Number : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
}
