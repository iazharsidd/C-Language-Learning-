#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m;
    printf("Enter marks :");
    scanf("%d",&m);
    if(m<30)
    {
        printf("C");
    }
    else if(m>=30&&m<70)
    {
        printf("B");
    }
    else if (m>=70&&m<90)
    {
        printf("A");
    }
    else if (m>=90&&m<=100)
    {
        printf("A+");
    }
    
    return 0;
}
