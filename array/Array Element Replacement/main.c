#include <stdio.h>
int main() {
    int a[10] = {87, 96, 321, 58, 48, 65, 753, 741, 852, 93};
    for(int i = 0; i < 10; i++) {
        if(a[i] % 2 == 0) {
            a[i] = 0; 
        } else {
            a[i] = 1; 
        }
    }
    
    printf("unmodified array\n87 96 321 58 48 65 753 741 852 93\n");
    printf("Modified array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
