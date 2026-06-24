#include<stdio.h>
int main(){

 int i,n,count=0;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
  
  for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
    if(str[i]==' '){
    count++; 
  }
  }

    printf("Words in a sentence: %d",count);
    return 0;
}