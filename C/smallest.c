#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("enter c =");
    scanf("%d",&c);
    if (a<b&&a<c)
    {
        printf("a %d is samllest ",a);
    }
    else if (b<a&&b<c)
    {
    printf("b %d is smallest",b);
    }
    else
    {
printf("c %d is mallest",c);
    }
    return 0;
}
