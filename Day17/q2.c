#include<stdio.h>
int main(){
    int n1,n2,i,j,flag;
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
    for(i=0;i<n1;i++){
        printf("%d ",arr[i]);
    }
    printf("Union of two arrays :");
    for(i=0;i<n2;i++){
        flag =0;
        for(j=0;j<n1;j++){
            if(brr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",brr[i]);
        }
    } printf("\n");
    return 0;
}