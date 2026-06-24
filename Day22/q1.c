#include<stdio.h>
int main(){

 int i,n,len=0,flag=1;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();
  printf("Enter a String:");
  fgets(str,n+1,stdin);
  
  for(i=0;str[i]!='\0' && str[i]!='\n';i++)
  {
    len++;
  }
for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i])
        {
            flag=0;
            break;
        }
  }
  if(flag==1){
    printf("Number is Palindrome.");
  } else{
  printf("Number is not palindrome.");}
  return 0;
}