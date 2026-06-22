#include<stdio.h>
int main(){
    int i=0,n,vow=0,conso=0;
  printf("Enter a number:");
  scanf("%d",&n);
  char str[n+1];
  getchar();
  printf("Enter a String:");
  fgets(str,n+1,stdin);
  while(str[i]!='\0' && str[i]!='\n'){
   if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
    vow++;
   }
   else if((str[i]>='a'&& str[i]<='z')|| (str[i]>='A'&& str[i]<='Z')){
    conso++;
   }
   i++;
} 
printf("Vowel= %d",vow);
printf("Consonant= %d",conso);
    return 0;
}
