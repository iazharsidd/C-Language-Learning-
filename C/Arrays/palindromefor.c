#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,2,1};
    int flag = 1;
    for (int i = 0,j =4; i < j; i++,j--)
    {
           if (arr[i]!=arr[j])
           flag=0;
           break;
    }
    if (flag==1)
    {
        printf("Palindrome");
    }
    else
    printf("Not Palindrome");
    return 0;
}
