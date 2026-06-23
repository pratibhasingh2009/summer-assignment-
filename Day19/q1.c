#include<stdio.h>
int main()
{
    int m,n,j,i;
    printf("Enter row and column number :");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Enter element of matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
} } 
    printf("\nEnter element of matrix B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
           }
        }
        printf("matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        } 
        printf("\n");
  }
  printf("matrix B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        } 
          printf("\n");
    }
 printf("Sum of matrixes\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
} 