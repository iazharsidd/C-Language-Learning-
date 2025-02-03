#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter Ram's Age : ");
    scanf("%d",&r);
     int s;
    printf("Enter Shyam's Age : ");
    scanf("%d",&s);
     int a;
    printf("Enter Ajay's Age : ");
    scanf("%d",&a);
    if (r<s)
    {
      if (r<a)
      {
       printf ("Ram is Youngest : %d",r);
      }
     else
      printf("Ajay is Youngest : %d",a);
    }
    else
    {
        if (s<a)
        {
            printf("Shyam is Youngest : %d",s);
        }
        else
      printf("Ajay is Youngest : %d",a);
        
    }

    return 0;
}
