#include<stdio.h>
int main(){
    int a,b,c,d,sum,sum2;
    printf("enter the first complex number:");
    scanf("%d%d",&a,&b);
    printf("\n enter the second complex number:");
    scanf("%d%d",&c,&d);
    sum=a+c;
    sum2=b+d;
    
    printf("%d+%di",sum,sum2);
    return 0;
}