#include <stdio.h>

int main()
{
    char name[50];
    char phone[20];
    char email[50];

    printf("Enter Contact Name: ");
    fgets(name, 50, stdin);

    printf("Enter Phone Number: ");
    fgets(phone, 20, stdin);

    printf("Enter Email ID: ");
    fgets(email, 50, stdin);

    printf("\n Contact Details \n");
    printf("Name : %s", name);
    printf("Phone Number : %s", phone);
    printf("Email ID : %s", email);
    return 0;
}