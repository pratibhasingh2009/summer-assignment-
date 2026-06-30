#include<stdio.h>
#include<string.h>
int main(){

 int i,j,n1,n2;
  printf("Enter size of first string:");
  scanf("%d",&n1);

  char str1[n1+1];
  getchar();

  printf("Enter first String: ");
  fgets(str1,n1+1,stdin);
  int len1 =strlen(str1);
  if(str1[len1-1]=='\n'){
    str1[len1-1]='\0';
  }
  printf("Enter size of second string:");
  scanf("%d",&n2);

  char str2[n2+1];
  getchar();

  printf("Enter second String: ");
  fgets(str2,n2+1,stdin);
  int len2 =strlen(str2);
  if(str2[len2-1]=='\n'){
    str2[len2-1]='\0';
  }
   printf("Common characters: ");
  for(i=0;str1[i]!='\0';i++)
 {
    for(j=0;str2[j]!='\0';j++)
  {
    if(str1[i]==str2[j])
    {
    printf("%c ",str1[i]);
    break;
    } 
  } 
 }
    return 0;
}