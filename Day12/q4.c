#include<stdio.h>
void perfectnum(int x){ 
    int i,sum =0;
    for(i=1;i<x;i++){
        if(x%i==0){
            sum = sum +i;
        }
    } printf("%d is Perfect number",x);
}
int main (){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    perfectnum(n);
    return 0;
}