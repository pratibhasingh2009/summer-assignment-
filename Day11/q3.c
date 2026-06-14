#include<stdio.h>
void prime(int number){ 
 int x=0; 
for(int i=2;i<number;i++){ 
if(number%i == 0){ 
 x=x+1; 
break; } 
} 
if(x==0){ 
 printf("number is prime number"); 
} 
else {
    printf("number is not prime number");
}  
    } 
int main(){ 
int number,x=0; 
printf("enter number = "); 
scanf("%d", &number); 
prime(number); 
return 0;
}