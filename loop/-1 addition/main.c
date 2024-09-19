#include  <stdio.h>
int main(){
    int num,sum;
    printf("enter the number:");
    scanf("%d",&num);
    do{
    sum+=num;
    printf("enter the number:");
    scanf("%d",&num);
   
    }
   while(num!=-1);
   
  printf("%d",sum);
    
    return 0;
   
    
    
    
}