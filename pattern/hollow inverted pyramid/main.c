#include <stdio.h>
int main(){
    int i,n=4,j,k;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++)
        {
          printf(" ");
        }
        
        for(k=0;k<=n-i;k++)
        {
            
         if(i==0 || i==3 || i==4 )
         {
             printf("* ");
         }
        else{
        if (k==0 || k==n-i)
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