// WAP to print 1, 2, 4, 6, 11, 16

#include <stdio.h>
int main() {
    int n = 1, i = 1;
    do {
        printf("%d ", n);
        n += i;
        i++;
    } while(i <= 11);
    return 0;
}
