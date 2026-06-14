#include<stdio.h>
void max(int x,int y,int z){
    int greatest;
    if(x>y && x>z){
        greatest =x; 
    } else if (y>z){
        greatest =y;
    } else {
         greatest =z;
    } printf("Maximum number is %d",greatest);
} 
int main(){
    int a,b,c,greatest;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);
    return 0;
}