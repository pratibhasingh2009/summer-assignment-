#include<stdio.h>
int main(){
    int i,n,sum,j;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n];
     printf("Enter required sum:");
    scanf("%d",&sum);
    printf("Enter elements of Array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
     printf("Pairs matching to the sum is S");
for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
             printf("(%d,%d)",arr[i],arr[j]);
            }
          }
    }
    return 0;
}