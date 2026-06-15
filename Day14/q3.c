#include<stdio.h>
int main(){
 int i,n,max,secondarymax;
 printf("Enter a number:");
 scanf("%d",&n);
 int k=n,arr[k];
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
 } max=arr[0];
 secondarymax=arr[0];
 for(i=1;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
 } for(i=1;i<n;i++){
    if(arr[i]!=max && secondarymax<arr[i]){
        secondarymax =arr[i];
    }
 }
 printf("Secondary max is %d",secondarymax);
 return 0;
}
