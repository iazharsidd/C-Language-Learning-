#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 100; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i+1);
        }
        
    }
    
    return 0;
}
