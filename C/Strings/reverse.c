#include <stdio.h>
#include <string.h>
 void  reverse_string(char *str)
 {
    int i,j;
    char temp;
    int len = strlen(str);
    for(i=0,j=len-1;i<j;i++,j--)
    {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    }
 }
int main(int argc, char const *argv[])
{
    char str[100];
    puts("Enter the String : ");
    scanf("%s",str);
    reverse_string(str);
    printf("The reversed string is : %s",str);
  return 0;
}
