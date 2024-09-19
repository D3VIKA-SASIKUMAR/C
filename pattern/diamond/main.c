#include <stdio.h>
int main() {
	int i,n=4,j,k;
	for(i=0; i<=n; i++) {
		for(j=0; j<=n-i; j++)
		{
			printf(" ");
		}
		for(k=0; k<=i; k++)
		{
			printf(" *");
		}
		printf("\n");
       }
    
    	int a,m=4,g,h;
	for(a=1; a<=m; a++) {
		for(g=0; g<=a; g++)
		{
			printf(" ");
		}
		for(h=0; h<=m-a; h++)
		{
			printf(" *");
		}
		printf("\n");
       }
}