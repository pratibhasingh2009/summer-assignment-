#include<stdio.h>
int main(){

 int i=0,n,l=0,start=0,max=0,maxstart=0;
  printf("Enter a number:");
  scanf("%d",&n);

  char str[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str,n+1,stdin);
   
  while(str[i]!='\0' && str[i]!='\n'){
    if(str[i]!=' '){
        l++;
    } else {
        if(l>max){
            max=l;
            maxstart=start;
        } 
        l=0;
        start=i+1;
    }
    i++;
  } 
   if(l>max){
            max=l;
            maxstart=start;
        } 
   printf("Longest word: ");
   for(i=maxstart;i<maxstart+max;i++){
    printf("%c",str[i]);
   }     
   printf("\nLength %d",max);
  return 0;
}