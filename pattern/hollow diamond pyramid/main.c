#include <stdio.h>
int main() {
	int i,n=3,j,k;
	for(i=0; i<=n; i++) {
		for(j=0; j<=n-i; j++)
		{
			printf(" ");
		}

		for(k=0; k<=i; k++)
		{

			if(i==0 || i==1 || i==4 || i==5 )
			{
				printf("*  ");
			}
			else {
				if (k==0 || k==i  )
				{
					printf("*  ");
				}
				else
				{
					printf("  ");
				}

			}

		}
		
			
		printf("\n");

	}
	
	int a,m=4,b,c;
	for(a=1; a<=m; a++) {
		for(b=0; b<=a; b++)
		{
			printf(" ");
		}

		for(c=0; c<=m-a; c++)
		{

			if(a==0 || a==3 || a==4 )
			{
				printf("* ");
			}
			else {
				if (c==0 || c==m-a)
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

	}

}
