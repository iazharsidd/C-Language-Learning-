#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,idx=0;
    printf("Enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
     for (int j = 0; j < a-1-i; j++)  
     {
        if (arr[j]==0)
      {
        int temp = arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
      }
     }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
