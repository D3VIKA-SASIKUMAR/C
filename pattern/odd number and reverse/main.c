 #include <stdio.h>
 int main(){
    int i,n=4,j,a=1;
     
        for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
        printf(" %d",a);
        a+=2;
       }
    printf("\n");
    }
    } 
     //reverse
     
     
     #include <stdio.h>
 int main(){
    int i,n=5,j,a=19;
     
        for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
        {
        printf(" %d",a);
        a-=2;
       }
    printf("\n");
    }
    }
    
    