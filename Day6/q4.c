#include<stdio.h>
int main(){
    int n,i,x,ans =1;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter power of a number(num):");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       ans =ans *x;
    }
printf("%d^%d is %d",x,n,ans);
return 0;
}