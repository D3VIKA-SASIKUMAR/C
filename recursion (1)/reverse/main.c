#include <stdio.h>
int reverse();
int main() {
    int num, reversed;
    printf("Enter an integer: ");
    scanf("%d", &num);
    reversed = reverse(num, 0);
    printf("The reversed number is %d\n", reversed);
  
}

int reverse(int num, int reversed) 
{
       if (num == 0)
        return reversed;
        reversed = reversed * 10 + num % 10;
        return reverse(num / 10, reversed);
}
