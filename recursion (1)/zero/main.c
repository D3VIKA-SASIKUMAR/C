#include<stdio.h>
int zero(int);
int main()
{
    int num,result;
    printf("enter the number:");
    scanf("%d",&num);
    result=zero(num);
    printf("no of zeros = %d",result);
}

    int zero(int num)
    {   
       
        if(num==0)
       
            return 0;
        else
         
         if (num % 10 == 0)
             
             return  1+zero(num / 10);
        
    else
       
        return zero(num / 10);

    }
