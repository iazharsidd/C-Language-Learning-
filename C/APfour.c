#include <stdio.h>
int main(int argc, char const *argv[])
{
    int nthterm;
    printf("Enter the nth term");
    scanf("%d",&nthterm);
    int firstterm=4;
    int commondiff=3;
    while(nthterm<=firstterm+(nthterm-1)*commondiff)
    {
        printf("%d\n",firstterm );
    }
    return 0;
}
