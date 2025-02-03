#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int max = arr[0];
    int smax = arr[0];
    for (int  i = 0; i <=9; i++)
    {
      if (max<arr[i])
      {
        smax = max;
        max=arr[i];
      }
      else if (smax<arr[i] && max!=arr[i])
      {
        smax=arr[i];
      }
      
    }
    printf("The second largest element is = %d",smax);
    return 0;
}