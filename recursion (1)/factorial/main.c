#include<stdio.h>
int factorial(int);
int main(){
           int num,result;
           printf("enter a number:");
           scanf("%d",&num);
           result=factorial(num);
           printf("%d",result);
}

   int factorial(int x)
   
   {
       
       if(x==1)
       {
           return 1;
       }
       else
       {
           return x*factorial(x-1);
       }
   }