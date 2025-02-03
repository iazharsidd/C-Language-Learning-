#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    int hMarks, eMarks, mMarks, pMarks, sMarks, cMarks;
};

void displayGrade(int totalMarks)
{
    if (totalMarks >= 80)
        printf("E\n");
    else if (totalMarks >= 70)
        printf("A\n");
    else if (totalMarks >= 60)
        printf("B\n");
    else if (totalMarks >= 50)
        printf("C\n");
    else if (totalMarks >= 40)
        printf("D\n");
    else
        printf("F\n");
}

int main()
{
    struct Student students[60];

    // Assume you input student details here
    // ...

    for (int i = 0; i < 60; i++)
    {
        if (students[i].sMarks < 40)
        {
            students[i].sMarks += 5;
        }

        int totalMarks = students[i].hMarks + students[i].eMarks +
                         students[i].mMarks + students[i].pMarks +
                         students[i].sMarks + students[i].cMarks;

        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %d\n", totalMarks);
        printf("Grade: ");
        displayGrade(totalMarks);
        printf("\n");
    }

    return 0;
}
