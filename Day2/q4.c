#include<stdio.h>
int main (){
    int num ,reverse = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    int number =num;
      while(number != 0){
        reverse = reverse*10 + number %10;
        number= number/10;
    }
      if(reverse == num){ 
    printf("Number %d is Palindrome",num);
    } else {
        printf("Number is not Palindrome");
    }
    return 0;
}