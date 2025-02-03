#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // calculate the discriminant
    discriminant = b*b - 4*a*c;

    // check if discriminant is negative, in which case the roots are imaginary
    if (discriminant < 0) {
        printf("Roots are imaginary.\n");
        return 0;
    }

    // calculate the roots
    root1 = (-b + sqrt(discriminant)) / (2*a);
    root2 = (-b - sqrt(discriminant)) / (2*a);

    // print the roots
    printf("Roots are: %lf and %lf\n", root1, root2);

    return 0;
}
