#include <stdio.h>
int gcd(int,int);
int main()
       
       {       
        int num1, num2;
		printf("Enter two integers: ");
		scanf("%d %d", &num1, &num2);
        printf("g.c.d of %d and %d is %d\n", num1, num2, gcd(num1, num2));

	}
	int gcd(int a, int b) {
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}