#include<stdio.h>
void sum(int a,int b){
    int add =a+b;
    printf("%d is sum of %d and %d",add,a,b);
} 
int main(){
    int n1,n2,add ;
    void sum(int a,int b);
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    sum(n1,n2);
    return 0;
}