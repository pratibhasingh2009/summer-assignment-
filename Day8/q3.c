#include<stdio.h>
int main(){
    int i,n;
    char j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=65;j<=i+64;j++){
            printf("%c",j);
        }
         printf("\n");
    } 
    return 0;
}