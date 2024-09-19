#include <stdio.h>
int main(){
    int p,r,t,simpleinterst;
    printf("enter the Principal:");
    scanf("%d",&p);
    printf("enter the rate of intrest:");
     scanf("\n%d",&r);
    printf("enter the time:");
     scanf("\n%d",&t);
   
    simpleinterst = ((p*r*t)/100);
    printf("S.I=%d",simpleinterst);
    return 0;
}