#include <stdio.h>

int main()
{
    int empId;
    char empName[50];
    char department[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    getchar();

    printf("Enter Employee Name: ");
    fgets(empName, 50, stdin);

    printf("Enter Department: ");
    fgets(department, 50, stdin);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\n------ Employee Details ------\n");
    printf("Employee ID : %d\n", empId);
    printf("Employee Name : %s", empName);
    printf("Department : %s", department);
    printf("Salary : %.2f\n", salary);

    return 0;
}