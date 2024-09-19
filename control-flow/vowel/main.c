#include<stdio.h>
int main()
{
    char letter;
    do{
    printf("\nenter the letter:");
    scanf("%c",&letter);
   switch(letter){
       case 'a':
       printf("vowel");
       break;
       
       case 'e':
       printf("vowel");
       break;
   
       case 'i':
       printf("vowel");
       break;
   
       case 'o':
       printf("vowel");
       break;
   
       case 'u':
       printf("vowel");
       break;
   
       default:
       printf("consonant");
    }
    }
    while(1);
    

    
   return 0;
}
    
