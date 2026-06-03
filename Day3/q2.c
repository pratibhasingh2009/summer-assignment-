#include <stdio.h>

int main() {
    int n1, n2, i, j, flag;

    printf("Enter starting number: ");
    scanf("%d", &n1);

    printf("Enter ending number: ");
    scanf("%d", &n2);

    for(i = n1; i <= n2; i++) {

        if(i <= 1)
            continue;

        flag = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("%d ", i);
    }

    return 0;
}