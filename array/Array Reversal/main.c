#include <stdio.h>

int main() {
    int a[6],i;
        printf("Enter 6 integers:\n");
        for( i = 0; i < 6; i++) {
        printf("integer %d: ", i);
        scanf("%d", &a[i]);
    }
        printf("\nArray in reverse order:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
