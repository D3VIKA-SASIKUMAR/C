#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {printf("%d is lragest",a);
    }
     if(b>a&&b>c)
     {printf("%d is largest",b);
     }
     
     if(c>a&&c>b)
     {printf("%d is largest",c);
     }
     
     if(a==b&&a==c)
     
     
     {printf("all are equal");}
     return 0;
     
}