#include <stdio.h>
int main(){
   int n,c=1,i;
   printf("enter the number:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       c*=i;
       }
    printf("%d",c);
   return 0;
  
}