#include <stdio.h>
int main(){
    int a,b,c,p;
    printf("enter length:");
    scanf("%d",&a);
    printf("enter breadth:");
    scanf("%d",&b);
    c=a*b;
    p=2*(a+b);
    printf("area = %d",c);
     printf("\npeimeter = %d",p);
    return 0;

    
}