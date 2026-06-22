#include<stdio.h>
int main(){
    int i=0,n;
  printf("Enter a number:");
  scanf("%d",&n);
  char str[n+1];
  getchar();
  printf("Enter a String:");
  fgets(str,n+1,stdin);
  while(str[i]!='0' && str[i]!='\n'){
  i++;}
  printf("Length=%d",i);
  return 0;
}
