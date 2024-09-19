#include <stdio.h>
int main() {
    int a[8] = {123,41,78965,32,654,7531,15,2},minimum,maximum=0;
    minimum=a[0];
    for(int i=0;i<8;i++) {
        if(a[i]>maximum) {
            maximum=a[i];
        }
        if(a[i]<minimum) {
            minimum=a[i]; 
        }
    }
    printf("Maximum value in the array: %d\n", maximum);
    printf("Minimum value in the array: %d\n", minimum);
    
    return 0;
}
