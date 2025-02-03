#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
char str[20] = "Azhar";
for (int i = 4; i>=2; i--)
{
   str[i+1]=str[i];
}
str[2] = 'M';
printf("%s",str);
return 0;
}