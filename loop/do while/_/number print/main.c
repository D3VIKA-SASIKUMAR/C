#include <stdio.h>
int main(){
    int num,i;
    printf("enter the starting value:");
    scanf("%d",&i);
    printf("\n enter the limit:");
    scanf("%d",&num);
    
    do{
        printf("%d\n",i);
        i++;
}
while(i<=num);
return 0;
}