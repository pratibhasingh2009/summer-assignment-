#include<stdio.h>
int main(){

 int i,n,j=0;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1],newstr[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
  for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
    if(str[i]!=' '){
        newstr[j]=str[i];
        j++;
    }
  }
  newstr[j]='\0';
    printf("String after removing spaces : %s",newstr);
    return 0;
} 