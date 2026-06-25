#include<stdio.h>
int main(){

 int i,n,j,count1=0,count2=0;
  printf("Enter a number:");
  scanf("%d",&n);

  char str1[n+1],str2[n+1];
  getchar();

  printf("Enter a String:");
  fgets(str1,n+1,stdin);
  printf("Enter a String:");
  fgets(str2,n+1,stdin);
  for(i=0;str1[i]!='\0' && str1[i]!='\n';i++)
  {
    count1++;
  }
    for(i=0;str2[i]!='\0' && str2[i]!='\n';i++)
 {
    count2++;
 }
  if(count1==count2){
     printf("Anagram can be Possible.");
    } 
    else {
        printf("Anagram can not be Possible.");
    }
    return 0;
} 