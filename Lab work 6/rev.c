#include <stdio.h>
#include <string.h>

int main() {
    char A[20];
    
    printf("Enter A string: ");
    scanf("%s", A);

    printf("Reverse of string is %s", strrev(A));
    return 0;
}