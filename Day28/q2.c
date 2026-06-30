#include <stdio.h>

int main()
{
    int accountNumber;
    char accountHolder[50];
    float balance, deposit, finalBalance;

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    getchar();

    printf("Enter Account Holder Name: ");
    fgets(accountHolder, 50, stdin);

    printf("Enter Current Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    finalBalance = balance + deposit;

    printf("\n------ Bank Account Details ------\n");
    printf("Account Number : %d\n", accountNumber);
    printf("Account Holder : %s", accountHolder);
    printf("Current Balance : %.2f\n", balance);
    printf("Deposit Amount : %.2f\n", deposit);
    printf("Final Balance : %.2f\n", finalBalance);

    return 0;
}