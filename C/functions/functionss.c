#include <stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectArea(float a, float b);

int main(int argc, char const *argv[])
{
    float a = 5.0;
    float b = 7.0;
    float side = 6;
    float rad = 4;
    printf("area of rectangle is ; %f\n", rectArea(a, b));
    printf("area of circle is ; %f\n", circleArea(rad));
    printf("area of square is ; %f\n", squareArea(side));

    return 0;
}
float squareArea(float side)
{
    return side * side;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectArea(float a, float b)
{
    return a * b;
}