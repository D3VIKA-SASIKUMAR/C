#include <stdio.h>
int main(){
    int num=0;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    {
    printf("%d is even number",num);
    }
    return 0;
}