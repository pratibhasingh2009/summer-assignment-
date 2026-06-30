#include<stdio.h>
int main(){
    int n,i,c;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
  for(i=0;str[i]!='\0' && str[i]!='\n';i++){
    c=1;
      while (str[i]==str[i+1]){
        c++;
        i++;
      }
      printf("%c%d",str[i],c);
  }
  return 0;
}