#include<stdio.h>
int main(){
    int n,a,i,j,k,l;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        } 
        for(k=1;k<=i;k++){
            char ch =(char)(k+64);
            printf("%c",ch);
        } a=i-1;
        for(l=1;l<=i-1;l++) 
        {  char cha =(char)(a+64);
            printf("%c",cha);
            a--;
        }
        printf("\n");
    }
    return 0;
}