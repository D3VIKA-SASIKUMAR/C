#include <stdio.h>

int fibonacci(int,int,int);
int main()
{
    int num,a=0,b=1;
    printf("Enter the limit:");
    scanf("%d",&num);
    fibonacci(num -1,a,b);
    return 0;
}
int fibonacci(int num,int a,int b){
    int c;
    if(b<num){
     c=a+b;


        printf("%d ",c);
        return fibonacci(num-1 ,b,c);

    }
    else{
        return 1;


    }
}