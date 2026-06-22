#include<stdio.h>
int main(){
    int m,n,j,i;
    printf("Enter row and column number :");
    scanf("%d%d",&m,&n);
    int arr[m][n],brr[m][n],crr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        } 
        printf("\n");
  }
     
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&brr[i][j]);
        } 
         printf("\n");
    }
     printf("Sum of matrixes");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
            printf("%d",crr[i][j]);
        }
        printf("\n");
    }
  return 0;
}