#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int sumEven=0;
    int sumOdd=0;
    int diff=0;
    for (int i = 0; i <=n-1; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
          if (i%2==0)
          {
            sumEven+=arr[i];
          }
          else
          sumOdd+=arr[i];
    }
    diff=sumEven-sumOdd;
    printf("%d",diff);
    return 0;
}
