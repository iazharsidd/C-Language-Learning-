#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,4,5,6};
    int sum=0;
    for (int i = 0; i <=4; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
