#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    struct Students
    {
        char name[50];
        int roll_no;
        int hmarks, emarks, mmarks, pmarks, cmarks;
    };
    int n;
    printf("Enter the Number of Students : ");
    scanf("%d", &n);
    struct Students st[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter deteail of student %d\nName :", i+1);
        scanf("%s", st[i].name);
        // strcpy(st[i].name,st[i].name);
        printf("Roll no. : ");
        scanf("%d",&st[i].roll_no);
        printf("Enter hmarks : ");
        scanf("%d", &st[i].hmarks);
        printf("Enter emarks : ");
        scanf("%d", &st[i].emarks);
        printf("Enter mmarks : ");
        scanf("%d", &st[i].mmarks);
        printf("Enter pmarks : ");
        scanf("%d", &st[i].pmarks);
        printf("Enter cmarks : ");
        scanf("%d", &st[i].cmarks);
        if (st[i].pmarks<40)
        {
            st[i].pmarks += 5;
        }
        else if (st[i].hmarks < 40)
        {
            st[i].hmarks += 5;
        }
        else if (st[i].emarks < 40)
        {
            st[i].emarks += 5;
        }
        else if (st[i].mmarks < 40)
        {
            st[i].mmarks += 5;
        }
        else if (st[i].cmarks < 40)
        {
            st[i].cmarks += 5;
        }
        int totalmrks = st[i].pmarks + st[i].emarks + st[i].hmarks + st[i].mmarks + st[i].cmarks;
        printf("Total marks : %d \n", totalmrks);
        float percentage = ((float)totalmrks / 500) * 100;
        printf("Percentage = %0.2f\n", percentage);
        if (percentage>=80 && percentage<=100)
        {
            printf("Grade : E\n");
        }
        else if (percentage >= 70 && percentage <= 79)
        {
            printf("Grade : A\n");
        }
        else if (percentage >= 60 && percentage <= 69)
        {
            printf("Grade : B\n");
        }
        else if (percentage >= 50 && percentage <= 59)
        {
            printf("Grade : C\n");
        }
        else if (percentage >= 40 && percentage <= 49)
        {
            printf("Grade : D\n");
        }
        else
            printf("Grade : F\n");
        }
    return 0;
}