#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,m;
    printf("Enter no. of words :");
    scanf("%d",&n);
    printf("Enter second no. for names :");
    scanf("%d",&m);
    getchar();
    
    char word[n][m],temp[m];
    for(i=0;i<n;i++)
    {
      printf("Enter word %d: ",i+1);
      fgets(word[i],m,stdin);
      int len =strlen(word[i]);
      if(word[i][len-1]=='\n')
      {
        word[i][len-1]='\0';
      }
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(word[i])>strnlen(word[j]))
            {
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",word[i]);
    }
    return 0;
}