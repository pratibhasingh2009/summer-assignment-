#include<stdio.h>
void palindrome(int n){
    int reverse =0;
  int number =n;
      while(number != 0){
        reverse = reverse*10 + number %10;
        number= number/10;
    }
      if(reverse == n){ 
    printf("Number %d is Palindrome",n);
    } else {
        printf("Number is not Palindrome");
    }  
}
int main (){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}