#include<stdio.h>
int main(){
    int i,n,j,temp,minimum;
    printf("Enter a element:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        minimum =i;
       for(j=i+1;j<n;j++) 
       {
        if(arr[j]<arr[minimum]){
              minimum=j;
        }
    }
            temp=arr[i];
            arr[i]=arr[minimum];
            arr[minimum]=temp;
    } 
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}