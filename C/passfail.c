#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
    if(marks>30)
    {
        printf("pass");
    }
    else
    printf("fail");

    return 0;
}
