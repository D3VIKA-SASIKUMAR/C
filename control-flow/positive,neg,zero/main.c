#include<stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive");
    }
    else if(num<0)
    {
        printf("negative");
    }
    else if(num==0)
    {
        
        printf("zero");
    }
    return 0;
}