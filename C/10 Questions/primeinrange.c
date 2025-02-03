#include <stdio.h>
#include <math.h>
int isPrime(int m) {
    for (int i = 2; i <= sqrt(m); i++) {
        if (m % i == 0) {
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int n) {
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}
int main() {
    int r;
    printf("Enter the Range: ");
    scanf("%d", &r);
    printf("Prime numbers between 1 and %d:\n", r);
    printPrimesInRange(r);
    printf("\n");
    return 0;
}