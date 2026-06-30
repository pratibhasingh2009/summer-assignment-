#include <stdio.h>

void display(int roll[], char name[][50], float marks[], int n)
{
    int i;

    printf("\n------ Student Details ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name : %s", name[i]);
        printf("Marks : %.2f\n", marks[i]);
    }
}

int main()
{
    int roll[3], i;
    float marks[3];
    char name[3][50];

    printf("Enter Details of 3 Students\n\n");

    for(i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        getchar();

        printf("Enter Name: ");
        fgets(name[i], 50, stdin);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);

        printf("\n");
    }

    display(roll, name, marks, 3);
    return 0;
}