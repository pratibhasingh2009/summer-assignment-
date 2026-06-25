#include<stdio.h>
int main(){
 int i,n,j,count,max=0;
 char ch;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
  for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
      count=0;
    for(j=0;str[j]!='\0' && str[j]!='\n';j++)
 {
    if(str[i]==str[j]){
        count++;
    }
 } 
  if(count>max){
    max=count;
    ch=str[i];
    }
  } 
  printf("Maximum occurring character %c",ch);
  return 0;
} 