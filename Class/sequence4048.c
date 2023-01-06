#include <stdio.h>
int main() {
    int i, j, k = 40;
    for(i = 1; i <= 5; i++) {
        for(j = k; j <= 40; j += 2) {
            printf("%d ", j);
        }
        k -= 2;
        printf("\n");
    }
    return 0;
}