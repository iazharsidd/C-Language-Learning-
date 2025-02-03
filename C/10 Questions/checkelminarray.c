#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=3;
    int flag=0;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==x)
        {
            flag=1;
            break;
            }
    }
            if(flag==1)
            printf("Element is present in the array");
            else
            printf("Element is not present in the array");
    return 0;
}
