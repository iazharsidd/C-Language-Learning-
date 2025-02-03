#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main(int argc, char const *argv[])
{
    printstar(2);
    return 0;
}
// argument no return type 