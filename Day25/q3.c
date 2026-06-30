#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,m;
    printf("Enter no. for names :");
    scanf("%d",&n);
    printf("Enter second no. for names :");
    scanf("%d",&m);
    getchar();
    char name[n][m],temp[m];
    for(i=0;i<n;i++){
      printf("Enter name %d: ",i+1);
      fgets(name[i],m,stdin);
      int len =strlen(name[i]);
      if(name[i][len-1]=='\n'){
        name[i][len-1]='\0';
      }
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("\nNames in alphabetical order:\n");
    for(i=0;i<n;i++){
        printf("%s\n",name[i]);
    }
    return 0;
}