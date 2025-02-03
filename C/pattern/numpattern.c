#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloumn : ");
    scanf("%d",&c);
    for (int i = 1; i <=2*r-1; i++)
    {
        for (int j = 1; j <=2*c-1; j++)
        {
            if (j==1||i==1||i==2*r-1||j==2*r-1)
            {
                printf("%d",r);
            }
             else if (j==2||i==2||i==2*r-2||j==2*r-2)
             {
                printf("%d",r-1);
             }
             else if (j==3||i==3||i==2*r-3||j==2*r-3)
             {
                printf("%d",r-2);
             }
             else if (j==4||i==4||i==2*r-4||j==2*r-4)
             {
                printf("%d",r-3);
             }
             else
             printf("1");
            }
        printf("\n");
    }
    return 0;
}
