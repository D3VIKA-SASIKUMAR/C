#include <stdio.h>
int main() {
    int num = 11;
    int isPrime = 1;


    if (num <= 1) {
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
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}