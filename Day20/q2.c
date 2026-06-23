#include<stdio.h>
int main()
{
    int m,flag=0,j,i;
    printf("Enter row and column number :");
    scanf("%d",&m);
    int a[m][m];
    printf("Enter element of matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
} } 
   printf("matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        } 
        printf("\n");
  }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==a[j][i]){
                flag =1;
            }
        }  
  }
  if(flag==1){
    printf("Matrix is symmetric matrix.");
  }
  else {
    printf("Matrix is not symmetric matrix.");
  }
  return 0;
} 