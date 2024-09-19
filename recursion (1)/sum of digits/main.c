#include<stdio.h>
int sum(int);
int main(){
          int lmt,result;
          
          printf("enter the lmt:");
          scanf("%d",&lmt);
          result=sum(lmt);
          printf("%d",result);
}

     int sum(int num)
     {
         if(num<=1)
         {
             return 1;
         }
         else
         {
             return num+sum(num-1);
         }
     }