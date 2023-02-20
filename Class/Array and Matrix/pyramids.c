#include <stdio.h>
int main() {
    int i, k, space, row = 5;
    for(i = 1; i <= row; i++){
        for(space = 1; space <= row - i; space++) printf(" ");
        for(k = 1; k <= 2 * i - 1; k++) printf("*");
        printf("\n");
    }
    return 0;
}