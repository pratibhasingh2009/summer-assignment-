#include <stdio.h>

int main()
{
    int productId, quantity;
    char productName[50];
    float price, totalCost;

    printf("Enter Product ID: ");
    scanf("%d", &productId);

    getchar();

    printf("Enter Product Name: ");
    fgets(productName, 50, stdin);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price Per Item: ");
    scanf("%f", &price);

    totalCost = quantity * price;

    printf("\n Inventory Details \n");
    printf("Product ID : %d\n", productId);
    printf("Product Name : %s", productName);
    printf("Quantity : %d\n", quantity);
    printf("Price Per Item : %.2f\n", price);
    printf("Total Cost : %.2f\n", totalCost);

    return 0;
}