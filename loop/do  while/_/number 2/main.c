#include <stdio.h>

int main(){
    int num,i=0;
    printf("enetr the limit:");
    scanf("%d",&num);
     do{
         printf("%d",i);
         i++;
     }
     while(i<=num);
     
     return 0;
}