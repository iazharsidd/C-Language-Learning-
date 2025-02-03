#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter thr number : ");
    scanf("%d",&i);
    int count =0;
    while(i!=0)
    {
    i=i/10;
    count++;
    }
    printf("The Number Of Digits are %d" , count);

    return 0;
}
