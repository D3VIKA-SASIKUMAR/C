#include <stdio.h>
int main (){
    int a,b,c,largest;
    printf("enter a number:");
    scanf("%d",&a);
     printf("enter a number:");
    scanf("\n%d",&b);
     printf("enter a number:");
    scanf("%d",&c);
    if(a>b&&a>c){
        largest=a;
    }
    if(b>a&&b>c){
        largest=b;
    }
    if(c>b&&c>a){
        largest=c;
    }
    printf("%d is largest ",largest);
}