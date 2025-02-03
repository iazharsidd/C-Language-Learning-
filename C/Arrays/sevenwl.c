#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=4;
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
   while (i<n)
   {
    printf("%d ",i);
    i+=3;
   }
    return 0;
}
