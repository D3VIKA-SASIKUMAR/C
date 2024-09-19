#include <stdio.h>
int main(){
    int num1,num2, operatoor,ans;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("\nenter an operator \n1.addition \n2.subtraction \n3.multiplication \n4.division");
    scanf("%d",&operatoor);
    switch(operatoor){
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
    }
    return 0;
}