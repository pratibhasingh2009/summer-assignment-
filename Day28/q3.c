#include <stdio.h>

int main()
{
    int ticketNo;
    char passengerName[50];
    char destination[50];
    int seats;
    float ticketPrice, totalAmount;

    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNo);

    getchar();

    printf("Enter Passenger Name: ");
    fgets(passengerName, 50, stdin);

    printf("Enter Destination: ");
    fgets(destination, 50, stdin);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("Enter Ticket Price: ");
    scanf("%f", &ticketPrice);

    totalAmount = seats * ticketPrice;

    printf("\n------ Ticket Details ------\n");
    printf("Ticket Number : %d\n", ticketNo);
    printf("Passenger Name : %s", passengerName);
    printf("Destination : %s", destination);
    printf("Number of Seats : %d\n", seats);
    printf("Ticket Price : %.2f\n", ticketPrice);
    printf("Total Amount : %.2f\n", totalAmount);

    return 0;
}