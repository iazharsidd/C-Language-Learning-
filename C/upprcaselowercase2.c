#include <stdio.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter Any Character:-");
    scanf("%c",&ch);
    if ( isupper(ch))
    {
        printf("UPPER CASE");
    }
    if ( islower(ch))
    {
        printf("lower case");
    }
    
    return 0;
}
