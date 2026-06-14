#include<stdio.h>
void sum(int a,int b){
    int sum =a +b;
} 
int main(){
    int n1,n2 ;
    void sum(int a,int b);
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    printf("%d is sum of %d and %d.",sum,n1,n2);
    return 0;
}