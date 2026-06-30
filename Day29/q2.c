#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice;
    int sum = 0;

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    printf("Enter Array Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n===== ARRAY MENU =====\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Largest Element\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 2:
            for(i = 0; i < n; i++)
            {
                sum = sum + arr[i];
            }
            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int largest = arr[0];

            for(i = 1; i < n; i++)
            {
                if(arr[i] > largest)
                    largest = arr[i];
            }

            printf("Largest Element = %d", largest);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}