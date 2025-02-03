#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter age ");
    scanf("%d",&age);
    (age>=18)? printf("adult"): printf("not adult");
    return 0;
} 
