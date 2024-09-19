#include <stdio.h>

int main()
{
    int num1,num2,lcm,a=1;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    lcm=(num1>num2)?num1:num2;
    while(a){
        if(lcm%num1==0&&lcm%num2==0){
            printf("LCM of %d & %d is %d.",num1,num2,lcm);
            a=0;
        }
        lcm++;
    }

    return 0;
}