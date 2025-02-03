#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[9]={1,1,2,2,3,4,4,5,5};
     for (int i = 0; i < 9; i++)
     {
     for (int  j = i+1; j < 9; j++)
     {
      if (arr[i]!=arr[j])
      {
          printf("Unique number %d \n",arr[j]);
      }
     }
     }
  return 0;
}