#include<stdio.h>
int main()
{
    int i=0,j=0;
    int a[4][3]={{1,2,3},{3,7,4},{7,9,8},{8,4,5}};
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("\na[%d][%d]=%d",i,j,a[i][j]);
        }
    }
}