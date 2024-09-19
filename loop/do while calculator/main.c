#include <stdio.h>
int main(){
    int operatoor,num1,num2,ans;
    do{
        printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("\n enter the operator \n1.addition \n2.subtraction \n 3.division \n4.multiplication");
    scanf("%d",&operatoor);
   switch(operatoor)
   {    
       
        case 1:
        ans=num1+num2;
        printf("%d",ans);
        break;
        case 2:
        ans=num1-num2;
        printf("%d",ans);
        break;
        case 3:
        ans=num1*num2;
        printf("%d",ans);
        break;
        case 4 :
        ans=num1/num2;
        printf("%d",ans);
        break;
        default:
        printf("invalid operator");
   }}
    
    while(1);
    
       
 
    return 0;
       }