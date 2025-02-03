#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("Largest Number is %d\n",a);
    }
    else
    {
        printf("Largest number is %d\n",b);
    }
    return 0;
}
