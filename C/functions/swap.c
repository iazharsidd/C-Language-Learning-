#include<stdio.h>
void swap(int* x,int* y){
int temp;
temp = *x;
*x = *y;
*y = temp;
return;
}
int main(int argc, char const *argv[])
{
    int a;
    int b;
    printf("Enter the number a : ");
    scanf("%d",&a);    
    printf("Enter the number b : ");
    scanf("%d",&b);
    swap(&a,&b) ;  
    printf("The value of a is = %d\n",a);    
    printf("The value of b is = %d",b);    
return 0;
}