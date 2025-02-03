#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the Number : ");
    scanf("%d",&r);
    int s =0 ;
    int rev;
    while (r!=0)
    {
    s=s*10;
    s=s+r%10;
    r=r/10;
    }
     printf("Reverse is : %d",s);
    return 0;
}
