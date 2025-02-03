#include <stdio.h>
int main(int argc, char const *argv[])
{
    
     int arr[10]={1,2,3,9,4,5,6,7,8,9};
     for (int i = 0; i<=9; i++)   
     {
      for (int j = i+1; j <=9; j++)
      {
        if (arr[i]==arr[j]){
            printf("%d",arr[j]);
        }
      }
     }
    return 0;
}