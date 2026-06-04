nclude<math.h>
#include<stdio.h>
int main (){
    int n,n1,n2,r,d=0,armstrong=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n2=n;
    while(n1>0)
    {
     d++;
     n1 =n1/10;
    } while(n2>0)
    {
        r =n2%10;
        armstrong =armstrong +pow(r,d);
        n2 =n2/10;
    } if (armstrong ==n){
        printf("%d is armstrong",armstrong);
    } else {
        printf("NOT a armstrong number");
    } 
    return 0;
}