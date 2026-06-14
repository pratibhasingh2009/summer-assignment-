#include<stdio.h>
int main(){
    int n,i,sum=0,arr[100];
    float avg;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
     for(i=0;i<n;i++){
         sum =sum+arr[i];
     }
    avg = sum/n;
    printf("Sum is %d and Average is %.2f",sum,avg);
    return 0;
}