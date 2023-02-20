#include <stdio.h>
int main() {
    int i, k, space;
    char s = 'A';
    for(i = 1; i < 4; i++) {
        for(space = 0; space < 4 - i; space++) printf(" ");
        for(k = 1; k <= 2 * i - 1; k++) printf("%c", s);
        printf("\n");
        s++;
    }
    return 0;
}