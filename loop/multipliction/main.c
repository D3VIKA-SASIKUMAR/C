#include <stdio.h>
int main(){
    int i,number,a,b;
    printf("enter the starting value:");
    scanf("%d",&a);
    printf("enter the ending value:");
    scanf("%d",&b);
    printf("enetr a  number:");
    scanf("%d",&number);
    for(i=a;i<=b;i++)
    {
        printf("%d*%d=%d\n",i,number,(number*i));
    }
    return 0;

}