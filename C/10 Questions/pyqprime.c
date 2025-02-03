#include<stdio.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
    for (int i = 10 ; i <= 100; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true )
        {
            printf("%d ", i);
        }
    }
    return 0;
}
