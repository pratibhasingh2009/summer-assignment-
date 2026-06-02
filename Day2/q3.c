#include<stdio.h>
int main (){
    int num ,product = 1;
    printf("Enter a number:");
    scanf("%d",&num);
    int number =num;
    while(number != 0){
        product = product*(number %10);
        number= number/10;
    }
    printf("Product of digits of a number %d is %d",num,product);
    return 0;
} 