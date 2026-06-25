#include<stdio.h>
int main(){

 int i,n,j;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
  for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
    for(j=i+1;str[j]!='\0' && str[j]!='\n';j++)
 {
    if(str[i]==str[j]){
     printf("First repeating character: %c",str[i]);
     return 0;
    }
 } 
  }
    return 0;
} 