#include<stdio.h>
int main(){
    int matrix[2][2]={{10,20},{30,40}};
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("replaced one\n");
   int row=1 , coloumn=1;
   matrix[row][coloumn]=25;
   for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
     
}}