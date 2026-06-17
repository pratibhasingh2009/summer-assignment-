#include<stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter first number:");
    scanf("%d",&n1);
     printf("Enter second number:");
    scanf("%d",&n2);
    int sum=n1+n2;
    int arr[n1],brr[n2],c[sum];
     printf("Enter elements of first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    } 
     printf("Enter elements of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&brr[i]);
    }
    printf("Merge two arrays :");
    for(i=0;i<n1;i++){
        c[i]=arr[i];
    }
    for(i=0;i<n2;i++){
        c[n1+i]=brr[i];
    }
    for(i=0;i<sum;i++){
        printf("%d ",c[i]); 
    }
    return 0;
}