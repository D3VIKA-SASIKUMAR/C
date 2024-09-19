#include <stdio.h>
int main() {
	int i,n=5,j;
	for(i=0; i<n; i++) {
		for(j=1; j<=n; j++)
		{
			if(i==1&&   (j==2|| j==3 || j==4 ))


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