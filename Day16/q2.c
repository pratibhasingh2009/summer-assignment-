#include<stdio.h>
int main(){
    int i,n,j,d=0,maxd=0,num;
    printf("Enter a element:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        d=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]);
            d++;
        }
    
    if(d>maxd){
        maxd=d;
        num=arr[i];
    }
  }
  printf("Maximum frequency element is %d",num);
  return 0;
}