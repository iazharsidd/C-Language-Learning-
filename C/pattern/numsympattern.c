#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int a=r;
    int b=1;
    
   for (int i = 1;i <=r; i++)
   {
    printf("%d",i);
   }
   for (int j =r-1; j>0; j--)
   {
    printf("%d",j);
   } 
   printf("\n");
   int s=r;
   for (int k = 1; k<r; k++)
   { 
    for (int l = 1; l<a; l++)
       { 
       printf("%d",l);  
       }
        for (int m = 1; m <=b; m++)
       {
        printf(" ");
       }
       s=s-1;
       for (int n =s; n>0; n--)
        {
         printf("%d",n);
        }
       printf("\n");
       a--;
       b+=2;
   }
    return 0;
}
