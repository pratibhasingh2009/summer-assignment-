#include<stdio.h>
int main(){
    int i,n,j=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
             j++;
        }
    } 
    printf("Array after moving zeroes:\n");
    for(i=0;i<n;i++){
        pritf("%d",arr[i]);
    } 
    return 0;
}