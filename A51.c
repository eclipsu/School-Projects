#include <string.h>
#include <stdio.h>
#define MAX_LIMIT 20
int main()
{
char str[MAX_LIMIT];
int i, c = 0;
fgets(str, MAX_LIMIT, stdin);
printf("%s", str);
for(i = 0; i < strlen(str); i++) {
    if(str[i] == ' ') c++;
}
printf("\nThere are: %d spaces", c);
return 0;
}
