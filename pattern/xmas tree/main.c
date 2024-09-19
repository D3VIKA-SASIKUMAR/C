#include <stdio.h>
int main() {
    //first set
    int z,x=20,v,o;
    for(z=1;z<=x;z++){
        for(v=0;v<=x-z;v++)
        {
         printf(" ");
        }
        for(o=1;o<=2*z-1;o++)
         {
         printf("*");
        }
    printf("\n");
    }
    
    //second set
	int i,n=20,j,k;
	for(i=8; i<=n; i++) {
		for(j=0; j<=n-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=2*i-1; k++)
		{
			printf("*");
		}
            printf("\n");
        }
        
         //stem
        int a,b=6,c;
    for(a=0;a<b;a++){
        for(c=5;c<b;c++)
        
        {
            printf("                ******** ");
        }printf("\n");
        }
    
    }
        






