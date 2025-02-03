#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int  b;
    a=10;
    b=2;
    /*Arithmatic operators*/
    printf("Arithmatic operator\n");
    printf ("a+b=%d\n",a==b);
    printf ("a-b=%d\n",a-b);
    printf ("a*b=%d\n",a*b);
    printf ("a/b=%d\n",a/b);
    /*Relational operators*/
    int x=12;
    int y = 12;
    printf("Relational Operator\n");
    printf("x==y %d\n",x==y);
    printf("x!=y %d\n",x!=y);
    printf("x>y %d\n",x>y);
    printf("x<y %d\n",x<y);
    printf("x<=y %d\n",x<=y);
    printf("x>=y %d\n",x>=y);
    /*Logical Operators*/
    int m = 0;
    int n = 15;
    printf("Logical Operator\n");
    printf("m&&n %d\n",m&&n);
    printf("m||n %d\n",m||n);
    printf("!m,!n %d\n",!m);
    return 0;
}
