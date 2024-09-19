#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float fees;
};
void main(){
       struct student s1,s2,s3;
    char dummy;
    printf("Enter the name ,id , fees of the student 1:");
    scanf("%s%d%f",s1.name,&s1.id,&s1.fees);
    scanf("%c",&dummy);
     printf("Enter the name ,id , fees of the student 2:");
    scanf("%s%d%f",s2.name,&s2.id,&s2.fees);
    scanf("%c",&dummy);
     printf("Enter the name ,id , fees of the student 3:");
    scanf("%s%d%f",s3.name,&s3.id,&s3.fees);
    scanf("%c",&dummy);
    printf("printing details.........\n");
    printf("%s\t%d\t%f\n",s1.name,s1.id,s1.fees);
    printf("%s\t%d\t%f\n",s2.name,s2.id,s2.fees);
    printf("%s\t%d\t%f\n",s3.name,s3.id,s3.fees);
    
}