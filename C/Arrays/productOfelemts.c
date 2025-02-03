#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int product =1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <=n-1; i++)
    {
        scanf("%d",&arr[i]);
    
     product = product*arr[i];
    }
    printf("%d",product);
    return 0;
}
