#include<stdio.h>
int main(){
    int n,i,even =0,odd=0,arr[100];
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } for(i=0;i<n;i++){
        if(arr[i]%2 ==0){
            even++;
        } 
        else{
            odd++;
        }
    } printf("Even elements are %d and Odd elements are %d",even,odd);
    return 0;
}