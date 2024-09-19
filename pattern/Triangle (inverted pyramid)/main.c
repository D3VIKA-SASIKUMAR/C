#include <stdio.h>
int main(){
    int i,n=6,j,k;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++)
        {
         printf(" ");
        }
        for(k=0;k<=n-i;k++)
         {
         printf(" *");
        }
    printf("\n");
    }
    }