#include <stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
 printf(" %d+%d=%d\n",a,b,a+b);
 printf("%d*%d = %d\n",a,b,a*b);
 printf("%d-%d = %d\n",a,b,a-b);
 printf("%d/%d = %d\n",a,b,a/b);
 printf("modulus of these two numbers = %d\n",a%b);
 return 0;
}