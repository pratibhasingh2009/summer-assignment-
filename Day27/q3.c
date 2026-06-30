#include <stdio.h>

int main()
{
    int empId;
    char empName[50];
    float basicSalary, hra, da, totalSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    getchar();

    printf("Enter Employee Name: ");
    fgets(empName, 50, stdin);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    hra = basicSalary * 20 / 100;
    da = basicSalary * 10 / 100;
    totalSalary = basicSalary + hra + da;

    printf("\n Salary Record \n");
    printf("Employee ID : %d\n", empId);
    printf("Employee Name : %s", empName);
    printf("Basic Salary : %.2f\n", basicSalary);
    printf("HRA (20%%) : %.2f\n", hra);
    printf("DA (10%%) : %.2f\n", da);
    printf("Total Salary : %.2f\n", totalSalary);

    return 0;
}