#include<stdio.h>
int main (){
    int num ,sum = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    int number =num;
    while(number != 0){
        sum = sum + number %10;
        number= number/10;
    }
    printf("Sum of digits of a number %d is %d",num,sum);
    return 0;
}