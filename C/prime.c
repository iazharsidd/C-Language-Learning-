#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for (int i = 2; i<n-1; i++)
  {
    if (n%i==0)
    {
      printf("Composite Number");
    }
    break;
    printf("Prime");
  }
  return 0;
  }