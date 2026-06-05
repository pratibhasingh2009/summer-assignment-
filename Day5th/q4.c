#include<stdio.h>
int main(){
    int n,i,j,factor,flag;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i ==0){
            flag =1;
            for(j=2;j<i;j++){
                if(i%j ==0){
                    flag =0;
                    break;
                }
            } 
            if(flag ==1){
                factor =i;
            }
        }
    } printf("%d is greatest prime number",factor);
    return 0;
}