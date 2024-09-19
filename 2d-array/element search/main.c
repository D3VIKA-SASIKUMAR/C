#include<stdio.h>
int main(){
    int matrix[3][3]={{5 ,10 ,15,},{ 20, 25, 30,},{ 35, 40, 45}};
    int num,r,c,flag=0;
    printf("enter the number to be searched:");
    scanf("%d",&num);
    for(int i = 0; i < 3; i++) {
        for(int j=0;j<3;j++){
        if(matrix[i][j]==num) {
            flag=1;
            r=i;
            c=j;
        } 
        
        }
    }
    if(flag)
    {
        printf("element found at row: %d\ncoloumn:%d",r,c);
    }
    else
    {
        printf("not found");
    }
}