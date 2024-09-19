#include <stdio.h>
int main(){
    int i,n=4,j,k;
    for(i=0;i<=n;i++){
        for(j=1;j<=n-i;j++)
        {
         printf("  ");
        }
        for(k=0;k<=i;k++)
         {
         printf(" *");
        }
    printf("\n");
    }
    }
  
  
  //inverted
/*#include <stdio.h>
int main(){
    int i,n=4,j,k;
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++)
        {
         printf("  ");
        }
        for(k=0;k<=n-i;k++)
         {
         printf(" *");
        }
    printf("\n");
    }
    }
*/