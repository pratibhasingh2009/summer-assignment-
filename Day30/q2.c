#include <stdio.h>

int main()
{
    int bookId;
    char bookName[50];
    char author[50];
    int quantity;

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    getchar();

    printf("Enter Book Name: ");
    fgets(bookName, 50, stdin);

    printf("Enter Author Name: ");
    fgets(author, 50, stdin);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("\n Library Details \n");
    printf("Book ID : %d\n", bookId);
    printf("Book Name : %s", bookName);
    printf("Author : %s", author);
    printf("Quantity : %d\n", quantity);
    
    return 0;
}