#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
} e1,e2;

int main()
{   
    e1.id=100;
    strcpy(e1.name,"jaisal");
    e1.salary=210000;
    
     e2.id=1000;
    strcpy(e2.name,"jai");
    e2.salary=2100;
    
    
    
    printf("employee id :%d\n",e1.id);
    printf("employee name:%s\n",e1.name);
    printf("employee salary:%f\n",e1.salary);
    
    printf("\n");
    
    printf("employee id :%d\n",e2.id);
    printf("employee name:%s\n",e2.name);
    printf("employee salary:%f\n",e2.salary);
}