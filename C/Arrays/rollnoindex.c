#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10];
    int i;
    for (int i = 0; i <=9; i++)
    {
      printf("Enter the marks of student %d : ",i+1);
      scanf("%d",&arr[i]);
    }
     for (int i = 0; i <=9; i++)
     {
      if (arr[i]<35)
        printf("%d ",i);
     }
    return 0;
}
