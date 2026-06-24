#include<stdio.h>
int main(){

 int i,n,count=0;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
  char ch;
  printf("Enter a character:");
  scanf("%c",&ch);
  
  for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
    if(str[i]==ch){
    count++;
  }
  }
    printf("words fequency: %d",count);
    return 0;
} 
/*
"for count letter in a word by string"
 for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
    if(str[i]==ch){
    count++;
  }
  } */