#include<stdio.h>
int main()
{
    int a[7]={52,845,78,9,54,5,65};
    int i,j,temp;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if (a[j]<a[i])       //change < for acsending || decsending
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     printf("printing sorted elements\n");
     for(i=0;i<7;i++)
    {
       printf("%d ",a[i]);
    }
}