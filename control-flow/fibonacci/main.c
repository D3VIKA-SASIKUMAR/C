#include <stdio.h>
    int main(){
    int limit,a=0,b=1,c=0;
    printf("enter limit:");
    scanf("%d",&limit);
    for(int i=0;i<=limit;i++){
    c=a+b;
    if(c<=limit)
    printf(" %d",c);
    a=b;
    b=c;
    }
    return 0;
    }