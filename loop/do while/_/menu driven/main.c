#include <stdio.h>
#include <stdlib.h>
 void main(){
     int choice,dummy;
     char c;
     do{
         printf("\n1.print hello \n2.print javatpoint \n 3.exit");
         scanf("%d",&choice);
         
         switch(choice){
             case 1:
             printf("hello");
             break;
             
             case 2:
             printf("javatpoint");
             break;
             
             case 3:
             printf("exit");
             break;
             default:
             printf("invalid choice!!");
             }
             printf("\ndo you want to enetr more?");
             
             scanf("%d",&dummy);
             scanf("%c",&c);
     }
             while(c=='y');
             
             
             
             
        
 }