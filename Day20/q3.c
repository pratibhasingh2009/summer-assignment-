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
    for(i=0;i<m;i++){
      int  sum=0;
        for(j=0;j<n;j++){
            sum+=a[i][j];
        } 
        printf("Sum of row %d is %d\n",i+1,sum);
  }
  return 0;
} 