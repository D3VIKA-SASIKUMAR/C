#include <stdio.h>
int main(){
    int Celsius,Fahrenheit;
    printf("enter Fahrenheit degreee :");
    scanf("%d",&Fahrenheit);
    Celsius = ( (Fahrenheit - 32) * 5/9);
    printf("Celsius degreee = %d",Celsius);
    return 0;
    
}