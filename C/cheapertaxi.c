#include <stdio.h>

int main(void) {
float a;
float b;
printf("Enter amount a");
scanf("%f",&a);
printf("Enter amount b");
scanf("%f",&b);
if(a>b)
{
    printf("b is cheaper");
}
if(b>a)
{
    printf("a is cheaper");
}
if(a==b)
{
printf("Any one");
}
	return 0;
}
