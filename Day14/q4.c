#include<stdio.h>
int main(){
 int i,n,j;
 printf("Enter a number:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter elements of array:");
 for(i=0;i<n;i++){
 scanf("%d",&arr[i]);
}  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
         if(arr[i]==arr[j]){
            printf("%d id a duplicate element",arr[i]);
            break;
         }
    }
}
 return 0;
}