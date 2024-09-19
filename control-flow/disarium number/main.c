#include<stdio.h>
#include <math.h>
int main(){
    int num,c,g,ans=0,r;
    printf("enter a number:");
    scanf("%d",&num);
    c=num;
    while(c!=0){
        c=c/10;
        g++;
    }
    printf("number of digits = %d",g);
    c=num;
    while(c!=0){
        r=c%10;
        ans=ans+pow(r,g);
        c=c/10;
        g--;
        }
        printf("\n%d",ans);
     if(ans==num){
         printf("\n%d is a disarium number",ans);
     }  
    
    
}