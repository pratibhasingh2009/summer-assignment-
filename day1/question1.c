#include<stdio.h>
int main(){
int N,i,sum =0;
printf("enter number N =");
scanf("%d", &N);
for(int i=1; i<=N;i++){
sum += 1; }
printf("sum of %d (N) natural number is %d", N, sum);
return 0;
}