#include <stdio.h>
int main(int argc, char const *argv[])
{
    char arr[] = "Basic String";
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    int i = 0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
