#include<stdio.h>
int main()
{
    int m,n,j,i,sum=0;
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
  } for(i=0;i<m;i++){
    sum=sum+a[i][i];
  } 
  printf("Sum of diagonal elements of a matrix: %d",sum);
  return 0;
}