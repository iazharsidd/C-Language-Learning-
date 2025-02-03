#include <stdio.h>
int main()
 {
    int n,c=0;
    int sum = 0;
    float average = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);
     printf("The odd natural numbers upto %d are : ",n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
            c++;
            printf("%d ",i);
        }
    }
    printf("\n");
    average = (float)sum / c;
    printf("The sum of the odd natural numbers is: %d\n", sum);
    printf("The average of the odd natural numbers is: %.2f\n", average);
    return 0;
}