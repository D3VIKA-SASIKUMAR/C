#include <stdio.h>
int main(){
    int a,b;
    printf("enter digits:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped =%d %d",a,b);
   
   
   return 0;
}
  // with 3 variables
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter digits:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swapped =%d %d",a,b);
   
   
   return 0;
}