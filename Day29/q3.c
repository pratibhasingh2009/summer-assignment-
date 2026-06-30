#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter First String: ");
    fgets(str1, 100, stdin);

    printf("Enter Second String: ");
    fgets(str2, 100, stdin);

    printf("\n STRING MENU \n");
    printf("1. Find Length of First String\n");
    printf("2. Copy First String\n");
    printf("3. Concatenate Strings\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu", strlen(str1)-1);
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String = %s", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated String = %s", str1);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}