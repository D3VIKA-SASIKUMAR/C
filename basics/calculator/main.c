#include <stdio.h>
int main(){
    int operatoor,ans;
    int number1,number2;
    printf("enter two numbers:");
    scanf("%d%d",&number1,&number2);
     printf("\nenter the operator:  \n1.Addition \n2.Subtraction \n3.Multiplication \n4.division");
     scanf("%d",&operatoor);
     
     if(operatoor==1){
         ans=number1+number2;
         printf("%d",ans);
     }
     else if(operatoor==2){
         ans=number1-number2;
         printf("%d",ans);
     }
      else if(operatoor==3){
         ans=number1*number2;
         printf("%d",ans);
     }
      else if(operatoor==4){
         ans=number1/number2;
         printf("%d",ans);
     }
    return 0;
    
}