#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter The Number :");
    scanf ("%d",&a);
    int n;
    int sum =0;
    while (n!=0)
    {
        n=a%10;
        if (n%2==0)
        {
            sum=sum+n;
        }
        a=a/10;
    }
    printf("The sum of even Number is %d",sum);
    return 0;
}
