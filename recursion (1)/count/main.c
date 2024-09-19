#include <stdio.h>
int count(int);
int main()
{
    int num,result;
    printf("enter the number:");
    scanf("%d",&num);
    result=count(num);
    printf("no of digits in %d = %d ",num,result);
}
int count(int num )                                                              
    {
        if(num==0)
        {
            return 0;
        }
        else
        {
            return  1+count(num/10);
        }
   
}
