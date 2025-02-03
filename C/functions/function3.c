#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter a Number");
    scanf("%d", &i);
    return i;
}
int main(int argc, char const *argv[])
{
    int c;
    c = takenumber();
    printf("The Enter Number is %d\n", c);
    return 0;
}
// no argument return type