#include <stdio.h>
int main() {
    
    int i, n, x = 0, y = 1, z = x + y;

    printf("Enter the range of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: %d, %d", x, y);

    for (i = 2; i < n; i++) {
        printf(", %d", z);
        x = y;
        y = z;
        z = x + y;        
    }

    return 0;
}