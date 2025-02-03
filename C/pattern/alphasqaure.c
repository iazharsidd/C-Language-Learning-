#include <stdio.h>
int main(int argc, char const *argv[])
{
    char r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    for (char  i = 1; i <=r; i++)
    { int a=1;
        for (char  j = 1; j <=i; j++)
        {
      int d=a+64;
      char ch  = (char)d;
      printf("%c",ch);
      a++;
        }
        printf("\n");
    }
    
    return 0;
}
