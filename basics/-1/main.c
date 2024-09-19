#include<stdio.h>

int main(){
      int num,res;
      printf("enter a number:");
      scanf("%d",&num);
      while(num!=-1){
          res+=num;
          printf("enter a number:");
          scanf("%d",&num);
      }
     printf("%d",res);
     return 0;
}