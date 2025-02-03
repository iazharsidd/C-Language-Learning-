#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    printf("The given array is :-");
    for (int i = 0; i < 7; i++)
    {
       printf(" %d",arr[i]);
    }
    for (int i = 0; i<=6; i++)
    {
        brr[i]=arr[6-i];
    }
    printf("\nThe reverse is :- ");
     for (int i = 0; i<=6; i++)
     printf("%d ",brr[i]);
    return 0;
}
