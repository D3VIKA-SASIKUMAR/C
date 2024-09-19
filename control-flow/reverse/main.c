#include <stdio.h>
int main (){
    int num,reverse=0,mode,a;
    printf("enter the numbers:");
    scanf("%d",&num);
    a=num;
    while( num!=0)
    {
       mode=num%10;
       reverse=reverse*10+mode;
       num=num/10;
    }
     printf("%d",reverse);
       
    
    
    return 0;
        
}