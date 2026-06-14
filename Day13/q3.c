#include<stdio.h>
int main(){
    int n,i,arr[100],largest,smallest;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } largest=smallest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
      largest =arr[i];
     } 
     if(smallest>arr[i]){
        smallest=arr[i];
     } 
    } printf("smallest number is %d and largest number is %d",smallest,largest);
    return 0;
}