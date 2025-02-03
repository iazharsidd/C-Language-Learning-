#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (char ch = 'A'; ch<='Z'; ch++)
    {   
     printf ("%c ->",ch);
    int a=(int)ch;
        printf (" %d \n",a);
    } 
    return 0;
}
