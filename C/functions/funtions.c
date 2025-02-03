#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 13;
    b = 15;
    c = sum(a, b);
    printf("%d", c);
    return 0;
}
// argument with return value