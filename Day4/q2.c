#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    if(n==1){
        printf("0");
    } else if(n==2){
        printf("1");
    }
    else{
         for(i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
       }
     printf("Nth Fibonacci term: %d",b);
        }
    return 0;
}