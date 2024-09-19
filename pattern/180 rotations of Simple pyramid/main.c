#include <stdio.h>
int main() {
	int i,n=4,j,k;
	for(i=4; i>=1; i--) {
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
}
