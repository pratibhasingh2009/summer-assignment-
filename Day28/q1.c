#include <stdio.h>
int main()
{
    int bookId;
    char bookName[50];
    char authorName[50];
    int quantity;

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    getchar();

    printf("Enter Book Name: ");
    fgets(bookName, 50, stdin);

    printf("Enter Author Name: ");
    fgets(authorName, 50, stdin);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("\n------ Library Record ------\n");
    printf("Book ID : %d\n", bookId);
    printf("Book Name : %s", bookName);
    printf("Author Name : %s", authorName);
    printf("Quantity : %d\n", quantity);
    return 0;
}