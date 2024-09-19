#include <stdio.h>
int main(){
    int i,number,a,b,ans;
    printf("enter the starting value:");
    scanf("%d",&a);
    printf("enter the ending value:");
    scanf("%d",&b);
    printf("enetr a  number:");
    scanf("%d",&number);
    for(i=a;i<=b;i++)
    {
       
        ans=number*i;
        if(ans%2==0)
        printf("%d*%d=%d\n",i,number,ans);
      
       
    }
    return 0;

}