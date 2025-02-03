#include <stdio.h>
int  gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the first number : ");
    scanf("%d", &a);
   int b;
   printf("Enter the second number : ");
   scanf("%d", &b);
   int lcm = (a * b) / gcd(a,b);
   printf("%d", lcm);
   return 0;
}