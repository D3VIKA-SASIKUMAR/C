#include<stdio.h>
#include<math.h>
int main(){
    int num,length,c,g=0,r,a,i,ans=0;
    printf("enter number:");
    scanf("%d",&num);
    
    
    //length check
    c=num;
    while(c!=0){
    c=c/10;
    g++;
    }
    printf("number of digits = %d",g); 
    
    
    //powering
    c=num;
    while (c!=0) {
        r=c%10;
        ans=ans+pow(r,g);
        c=c/10;
       }
    printf("\n%d",ans);
    
    //checking if its a armstrong number
    
    if(ans!=num){
        printf("\n%d is not an armstrong number ",ans);
    }
        else{ 
            printf("\n%d is  an armstrong number ",ans);
        }
        
        
    
      
    
return 0;
}