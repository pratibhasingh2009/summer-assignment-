#include<stdio.h>
int main()
{
    int m,n,j,i;
    printf("Enter row and column number :");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter element of matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
} } 
   printf("matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        } 
        printf("\n");
  }
  printf("Reverse matrix of A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        } 
        printf("\n");
  }
  return 0;
} 