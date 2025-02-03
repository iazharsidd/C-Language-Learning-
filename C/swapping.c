#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 8;
    int b = 9;
    int c;
    printf("before swap a=%d b=%d\n", a,b);
    c=a;
    a=b;
    b=c;
    printf("after swap a=%d b=%d", a,b);
    return 0;
}
