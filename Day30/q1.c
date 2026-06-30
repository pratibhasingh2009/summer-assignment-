#include <stdio.h>

int main()
{
    int roll[5], i;
    float marks[5];
    char name[5][50];

    printf("Enter Details of 5 Students\n\n");

    for(i = 0; i < 5; i++)
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

    printf("\n Student Records \n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name : %s", name[i]);
        printf("Marks : %.2f\n", marks[i]);
    }
    return 0;
}