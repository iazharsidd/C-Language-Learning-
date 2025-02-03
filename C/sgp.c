#include <stdio.h>
int main(int argc, char const *argv[])
{
  int n;
  printf("Enter th e value of n : ");
  scanf("%d",&n);
  float a=100;
  for (int i = 1; i <=n; i++)
  {
    a=a/2;
    printf("%f\n",a);
  }
    return 0;
}
