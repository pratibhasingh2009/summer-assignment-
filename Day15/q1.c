#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n],brr[n];
    printf("Enter elements of array:");
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    } 
    for(i=0;i<=n-1;i++){
        brr[i]=arr[n-1-i];
    }
     printf("Reverse array is:");
    for(i=0;i<=n-1;i++){
        printf("%d ",brr[i]);
    } 
    return 0;
}