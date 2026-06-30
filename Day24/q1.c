#include<stdio.h>
#include<string.h>
int main(){

 int i,n1,n2;
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
  if(strlen(str1)!=strlen(str2)){
    printf("String are not rotations.");
    return 0;
  }
  char temp[500];
  strcpy(temp,str1);
  strcat(temp,str1);
  if(strstr(temp,str2)){
    printf("Strings are in rotations.");
  } else{
    printf("Strings are not in rotations.");
  }
  return 0;
} 