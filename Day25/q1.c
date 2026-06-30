#include<stdio.h>
int main(){
    int n1,n2,i=0,j=0,k=0;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
     printf("Enter size of second array: ");
    scanf("%d",&n2);
    int arr[n1],brr[n2],crr[n1+n2];
    printf("Enter elements of first array : ");
    for(i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter elements of second array : ");
    for(i=0;i<n2;i++){
        scanf("%d",&brr[i]);
    }
    while(i<n1 && j<n2){
        if(arr[i]<brr[j]){
            crr[k]=arr[i];
            i++;
        }
        else{
            crr[k]=brr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        crr[k]=arr[i];
        i++;
        k++;
    }
    while(j<n2){
        crr[k]=brr[j];
        j++;
        k++;
    }
    printf("Merged Array:\n");
    for(i=0;i<n1+n2;i++){
        printf("%d ",crr[i]);
    }
    return 0;
}