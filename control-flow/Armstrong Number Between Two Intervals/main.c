#include<stdio.h>
#include<math.h>
int main(){
    int num,length,c,g=0,r,ans=0,start,end;
     printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:", start, end);
    
      for (num = start; num <= end; num++) {
        g = 0;
        ans = 0;
        
    
    
    //length check
    c=num;
    while(c!=0){
    c=c/10;
    g++;
    }
     
    
    
    //powering
    c=num;
    while (c!=0) {
        r=c%10;
        ans=ans+pow(r,g);
        c=c/10;
       }
    
    
    //checking if its a armstrong number
    
    if(ans==num){
        printf("%d ",num);
    }
       
        }
        
        
    
      
    
return 0;
}     
