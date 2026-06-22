#include<stdio.h>
int main(){
    int i,n,j,num,low=0,high,mid;
    printf("Enter Element:");
    scanf("%d%d",&n,&num);
    int arr[n];
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==num){
            printf("Element is found.");
            return 0;
        }
        else if(arr[num>arr[mid]])
        low=mid+1;
        else{
            high=mid-1;
        }
    }
        printf("Element is Not found.");
    
    return 0;
}