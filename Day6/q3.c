#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        if(n%2 ==1){
            count++;
        }
         n =n/10;
    } 
    printf("Number of bits is %d",count);
    return 0;
}