#include <stdio.h>
int sum(int);
int main()
{
    int num,result;
    printf("enter the limit :");
    scanf("%d",&num);
    result=sum(num);
    printf("%d is the sum of first %d odd numbers",result,num);
}
int sum(int num)
{
    if(num)
    {
        if(num%2==0)
        {
            return sum(num-1);
        }
        else
        
        {
            return  num+sum(num-1);
        }
        
    }
}