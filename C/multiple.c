#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Print multiplication of a number enter by the user in pretty form\n");
    int a;
    scanf("%d",&a);
    for (int i=1;i<=10;i++)
    {
        int m =i*a;
        printf("%dx%d=%d\n",a,i,m);
    }
    return 0;
}
