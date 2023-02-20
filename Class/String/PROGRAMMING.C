#include <stdio.h>
int main() {
   int i, k, flag = 0;
   char word[] = "PROGRAMMING";
   for(i = 1; i <= 11; i++) {
    for(k = 0; k < i; k++)
        printf("%c", word[k]);
    printf("\n");
   }
   for(i = 10; i >= 1; i--) {
    for(k = 0; k < i; k++)
        printf("%c", word[k]);
    printf("\n");
   }
}
