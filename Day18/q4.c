#include<stdio.h>
int main(){
    int i,n,j,temp;
    printf("Enter a element:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++) {
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}