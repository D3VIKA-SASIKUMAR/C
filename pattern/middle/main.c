#include <stdio.h>
int main(){
    int i,n=5,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
        if(i==2&& (j==2))
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