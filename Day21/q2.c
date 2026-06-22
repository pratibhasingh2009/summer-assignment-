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
  printf("Reverse string:");
  for(i=i-1;i>=0;i--){
    printf("%c",str[i]);
  }
    return 0;
}
