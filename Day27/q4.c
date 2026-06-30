#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    getchar();

    printf("Enter Student Name: ");
    fgets(name, 50, stdin);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &marks1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &marks2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &marks3);

    total = marks1 + marks2 + marks3;
    percentage = total / 3;

    printf("\n------ Marksheet ------\n");
    printf("Roll Number : %d\n", roll);
    printf("Student Name : %s", name);
    printf("Subject 1 : %.2f\n", marks1);
    printf("Subject 2 : %.2f\n", marks2);
    printf("Subject 3 : %.2f\n", marks3);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 80)
        printf("Grade : A\n");
    else if (percentage >= 70)
        printf("Grade : B\n");
    else if (percentage >= 60)
        printf("Grade : C\n");
    else if (percentage >= 40)
        printf("Grade : D\n");
    else
        printf("Grade : Fail\n");
    return 0;
}