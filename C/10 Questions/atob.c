#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    printf("a = %d,b = %d\n", a, b);
    int ans = a * power(a, b - 1);
    printf("%d * power(%d, %d - 1)=%d\n",a,a,b,ans);
    return ans;
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enetr the number : ");
    scanf("%d", &a);
    int b;
    printf("Enetr the power : ");
    scanf("%d", &b);
    int pow = power(a, b);
    printf("%d", pow);
    return 0;
}