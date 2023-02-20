#include <stdio.h>
int main() {
    int i, k, space, s = 1;
    for(i = 1; i <= 5; i++) {
        for(space = 0; space < 5 - i; space++)
            printf(" ");
        printf("%d\n", s * s);
        s = s * 10 + 1;
    }
    return 0;
}