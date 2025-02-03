#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    int age;
};
int main() {
    struct Student students[10];
    printf("Enter information of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
    }
    return 0;
}