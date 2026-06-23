#include<stdio.h>
int main(){

 int i=0,n;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
  
  for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
  }
  printf("Uppercase string: %s",str);
  return 0;
}