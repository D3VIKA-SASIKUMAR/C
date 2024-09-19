#include <stdio.h>
int main(){
    int i,n=5,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
        if(j==2&& (i==2 || i==3 || i==1) || j==3 && (i==2 || i==3 || i==1) || j==1&& (i==2 || i==3 || i==1) )
        {
            printf("  ");
        }
        
        else
        {
            printf("* ");
        }
        }
    printf("\n");
    }
    
    
}