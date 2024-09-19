#include <stdio.h>
int main(){
   int sum,i,n;
   printf("enter the number:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   sum=sum+i;
   printf("sum of natural numbers %d = %d",n,sum);
}

