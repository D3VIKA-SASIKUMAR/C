#include <stdio.h>
int main() {
    int num,start,end,isPrime=1;
     printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:", start, end);


    if (num <= start) {
        isPrime = 0;
    } else if (num % 2 == 0 && num != 2) {
        isPrime = 0;
    } else if (num % 3 == 0 && num != 3) {
        isPrime = 0;
    } else if (num % 5 == 0 && num != 5) {
        isPrime = 0;
    } else if (num % 7 == 0 && num != 7) {
        isPrime = 0;
    } 

    if (isPrime) {
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}   