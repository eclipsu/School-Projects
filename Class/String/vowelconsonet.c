#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int i, v = 0, c;
    printf("Enter string: ");
    scanf("%s", str);
    strlwr(str);
    for(i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                v++;
            }
            else c++;
        }
    }
    printf("There are %d vowels\n", v);
    printf("There are %d consonants\n", c);
}