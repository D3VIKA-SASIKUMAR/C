#include<stdio.h>
int main(){
    int array[7]={5, 12, 7, 18, 9, 10, 22};
    int i,sum=0;
     printf("elements are:");
    for(i=0;i<7;i++){
        if(array[i]%2==0){
            
            printf("%d ",array[i]);
            sum++;
        }
        }
    printf("\nnumber of even elements:%d ", sum);
   
}