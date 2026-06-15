#include<stdio.h>
int main(){
    int n,i,num,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int k=n,arr[k];
    printf("Enter a number for checking:");
    scanf("%d",&num);
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    for(i=0;i<n;i++){
      if(arr[i]==num){
        count=1;
        break;
      }
    } 
    if(count==1){
    printf("Element %d is found",num);
    } else {
        printf("Element is not found");
    } 
    return 0;
}