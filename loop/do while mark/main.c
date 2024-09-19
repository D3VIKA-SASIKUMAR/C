#include <stdio.h>
int main(){
    int mark;
    do{
        printf("\nenter the mark:");
        scanf("%d",&mark);
        if(mark>100)
        {
            printf("invalid mark");
        }
        else if (mark>90 && mark<=100)
        {
            printf("Grade A");
        }
        else if (mark>80 && mark<90)
        {
            printf("Grade B");
        }
        else if (mark>70 && mark<80)
        {
            printf("Grade c");
        }
        else if (mark>60 && mark<70)
        {
            printf("Grade d");
        }
        else if (mark<60)
        {
            printf("failed");
        }
    }
     while(1);
     return 0;
}