#include <stdio.h>
int main()
{
    int id;
    char name[50];
    char department[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    getchar();

    printf("Enter Employee Name: ");
    fgets(name, 50, stdin);

    printf("Enter Department: ");
    fgets(department, 50, stdin);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\n------ Employee Record ------\n");
    printf("Employee ID : %d\n", id);
    printf("Employee Name : %s", name);
    printf("Department : %s", department);
    printf("Salary : %.2f\n", salary);

    return 0;
}