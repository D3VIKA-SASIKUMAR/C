#include <stdio.h>
#include <math.h>
int main(){
    int p,r,n,t,s,compoundintrest,power;
    printf("enter the principl amount:\n");
    scanf("%d",&p);
    printf("enter the rate of intrest:\n");
    scanf("%d",&r);
    printf("enetr the number of years:\n");
    scanf("%d",&n);
    printf("enter the time period:\n");
    scanf("%d",&t);
    compoundintrest= p *(1 +( r/n)) ;
    power=n*t;
    s=pow(compoundintrest,power);
    printf("%d\n",compoundintrest);
    printf("%d\n",power);
    printf("%d",s);
    return 0;
    
}