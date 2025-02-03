#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < a; i++)
    {
        int j = i;
        while (j>=1 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    for (int i = 0; i < a; i++)
    {
      printf("%d ",arr[i]);
    }
    return 0;
}