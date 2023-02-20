#include <stdio.h>
int main() {
    int i, j;
    char nepal[] = "NEPAL";
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j <=  i; j++)
            printf("%c", nepal[j]);
        printf("\n");
    }
    return 0;
}