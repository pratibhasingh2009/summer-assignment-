#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float marks1, marks2, marks3, total, percentage;

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

    printf("\n------ Student Record ------\n");
    printf("Roll Number : %d\n", roll);
    printf("Name : %s", name);
    printf("Subject 1 Marks : %.2f\n", marks1);
    printf("Subject 2 Marks : %.2f\n", marks2);
    printf("Subject 3 Marks : %.2f\n", marks3);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    return 0;
}

/*
#include<stdio.h>
int main(){
    int n,rollnum;
    float marks1,marks2,marks3,total,percentage;
    printf("Enter number n : ");
    scanf("%d",&n);
     char name[n];
    printf("Enter Roll number: ");
    scanf("%d",&rollnum);
    getchar();

    printf("Enter student name : ");
    fgets(name,n,stdin);
    printf("Enter marks of Subject1,Subject2 and Subject3 : ");
    scanf("%d%d%d",&marks1,&marks2,&marks3);
    total= marks1+marks2+marks3;
    percentage=(total/3)*100;
    printf("STUDENT RECORD\n!");
    printf("Roll number : %d\n",rollnum);
    printf("Name : %s",name);
    printf("Subjects 1,2 and 3 marks : %.2f\n %.2f\n %.2f\n",marks1,marks2,marks3);
    printf("Total marks : %.2f\n",total);
    printf("Percentage : %.2f\n",percentage);
    
    return 0;
    
}
*/