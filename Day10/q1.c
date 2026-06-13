#include<stdio.h>
int main(){
    int n,i,j,k,star =1,space;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        } 
        for(k=1;k<=star;k++){
            printf("*");
        } star+=2;
        printf("\n");
    }
    return 0;
}