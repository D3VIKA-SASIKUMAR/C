#include <stdio.h>
int main(){
    char letter;
    printf("enter a letter:");
    scanf("%c",&letter);
    switch(letter){
        case 'a':
        printf("letter is a vowel");
        break;
        case 'e':
        printf("letter is a vowel");
        break;
        case 'i':
        printf("letter is a vowel");
        break;
        case 'o' :
        printf("letter is a vowel");
        break;
        case 'u':
        printf("letter is a vowel");
        break;
        default:
        printf("not a vowel");
    }
    return 0;
}