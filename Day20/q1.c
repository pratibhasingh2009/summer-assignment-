#include<stdio.h>
int main()
{
    int m,n,r2,c1,j,l,i;
    printf("Enter row and column numbers :");
    scanf("%d%d%d",&m,&n,&r2);
    c1=r2;
    int a[m][c1],b[r2][n],c[m][n];
    printf("Enter element of matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
} } 
    printf("\nEnter element of matrix B:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
           }
        }
        printf("matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        } 
        printf("\n");
  }
  printf("matrix B:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        } 
          printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(l=0;l<r2;l++){
                c[i][j]+=a[i][l]*b[l][j];
            }
        }
    } 
    printf("Multiplication of two matrixes :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}