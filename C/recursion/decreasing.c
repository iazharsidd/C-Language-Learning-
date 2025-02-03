#include <stdio.h>
void decreasing (int n )
{
if (n==0)
return;
printf("%d\n",n);
decreasing(n-1);
return;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enetr the Numeber : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}