#include <stdio.h>
void rev (int arr[])
{
    int i=0;
    int j=4;
    while (i<j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
        if (arr[i]!=arr[j])
        break;
        else
        printf("Palindrome ");
        }
    return  ;
}
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,2,1};
    rev(arr);
    return 0;
}
