#include<stdio.h>
int main(){
    int coinnumber,guess;
    printf("Enter coinnumber : ");
    scanf("%d",&coinnumber);
    printf("Guess the number : ");
    while(1){
        scanf("%d,&guess");
        if(guess==coinnumber){
            printf("Yeh! correct guessing.");
            break;
        }
        else if(guess>coinnumber){
            printf("Too High! Try again.");
        }
        else{
            printf("Too Low! Try again.");
        }
    }
    
    return 0;
}