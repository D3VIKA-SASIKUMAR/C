#include <stdio.h>
int power(int num, int pnum);
int main() {
    int num, result, pnum;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pnum);
    result = power(num, pnum);
    printf("%d^%d = %d\n", num, pnum, result);
    return 0;
}
int power(int num, int pnum) {
    if (pnum == 0) {
        return 1;
    } else {
        return num * power(num, pnum - 1);
    }
}
