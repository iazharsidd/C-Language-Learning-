#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int given = 4;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i]==given)
        {
            printf("Element is found at index %d \n",i);
        }
        
    }
    
    return 0;
}
