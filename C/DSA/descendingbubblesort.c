#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {  
      bool flag = true;
      for (int j = 0; j < n-1-i; j++)
       {
         if (arr[j]<arr[j+1])
          {
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag =  false;
          }
        }
          if (flag == true)
          break;
    }
     printf("After sorting ");
     for (int i = 0; i < n; i++)
     {
     printf("%d ",arr[i]);
     }
     return 0;
} 