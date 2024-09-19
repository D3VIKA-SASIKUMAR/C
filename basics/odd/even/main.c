#include <stdio.h>
int main(){
    int number;
    printf("enter number:");
    scanf("%d",&number);
    (number%2==0)?(printf("number is even")):(printf("number is odd"));
    return 0;
}

#include <stdio.h>
int main(){
    int number;
    printf("enter number:");
    scanf("%d",&number);
    (number%2!=0)?(printf("number is odd")):(printf("number is even"));
    return 0;
}