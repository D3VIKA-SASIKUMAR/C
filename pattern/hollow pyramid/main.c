#include <stdio.h>
int main(){
    int i,n=4,j,k;
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++)
        {
          printf(" ");
        }
        
        for(k=0;k<=i;k++)
        {
            
         if(i==0 || i==1 || i==4 )
         {
             printf("* ");
         }
        else{
        if (k==0 || k==i)
        {
         printf("* ");
        }
        else 
        {
            printf("  ");
        }
        
        }
   
    }
    printf("\n");
    }}