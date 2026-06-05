#include<stdio.h>
int main(){
    int n,i,n1,r,fact,sum =0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
         fact =1;
        r = n1%10;

        for(i=1;i<r;i++){
            fact =fact*i;
        } sum =sum +fact;
        n1 =n1/10;
    } if(sum ==n){
        printf("%d is a Strong number",sum);
    } else {
        printf("%d is not a Strong number",sum);
    } return 0;
}