#include <stdio.h>
#include <string.h>

int main() {
    char A[20], B[20];
    
    printf("Enter two strings: ");
    scanf("%s%s", A, B);

    printf("Concatenation is:  is: %s", strcat(A, B));
    return 0;
}