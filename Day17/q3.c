#include<stdio.h>
int main(){
    int n1,n2,i,j;
    printf("Enter first number:");
    scanf("%d",&n1);
     printf("Enter second number:");
    scanf("%d",&n2);
    int arr[n1],brr[n2];
     printf("Enter elements of first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    } 
     printf("Enter elements of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&brr[i]);
    } 
    printf("Intersection of Elements :");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr[i]==brr[j]){
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}